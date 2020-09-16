/***************************************************************************//**
 * @file
 * @brief main() function.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
#include "sl_component_catalog.h"
#include "sl_system_init.h"
#include "app.h"
#if defined(SL_CATALOG_POWER_MANAGER_PRESENT)
#include "sl_power_manager.h"
#endif // SL_CATALOG_POWER_MANAGER_PRESENT
#if defined(SL_CATALOG_KERNEL_PRESENT)
#include "sl_system_kernel.h"
#else // SL_CATALOG_KERNEL_PRESENT
#include "sl_system_process_action.h"
#endif // SL_CATALOG_KERNEL_PRESENT

#include "sl_efp_efp0_config.h"

sl_efp_handle_data_t efp_handle_data;          // EFP instance data structure
sl_efp_handle_t      efp = &efp_handle_data;   // EFP instance pointer

void EFPInit()
{
  // Load all configurations into an init structure, and pass it to the
    // driver initialization function.
    sl_efp_init_data_t init = SL_EFP_EFP0_INIT;
    sl_efp_init(efp, &init);

    // Set voltage regulator B (VOB) output voltage and peak currents.
    sl_efp_set_vob_em01_voltage(efp, 1100);
    sl_efp_set_vob_em23_voltage(efp, 1100);
    sl_efp_set_vob_em01_peak_current(efp, 108, 3300, 1100, 3300);
    sl_efp_set_vob_em23_peak_current(efp, 108, 3300, 1100, 3300);

    // Enable VOB in buck mode.
    sl_efp_set_vob_mode(efp, efp_vob_mode_buck);

}
int main(void)
{
  // Initialize Silicon Labs device, system, service(s) and protocol stack(s).
  // Note that if the kernel is present, processing task(s) will be created by
  // this call.
  sl_system_init();

  EFPInit();

  // Initialize the application. For example, create periodic timer(s) or
  // task(s) if the kernel is present.
  app_init();

#if defined(SL_CATALOG_KERNEL_PRESENT)
  // Start the kernel. Task(s) created in app_init() will start running.
  sl_system_kernel_start();
#else // SL_CATALOG_KERNEL_PRESENT
  while (1) {
    // Do not remove this call: Silicon Labs components process action routine
    // must be called from the super loop.
    sl_system_process_action();

    // Application process.
    app_process_action();

#if defined(SL_CATALOG_POWER_MANAGER_PRESENT)
    // Let the CPU go to sleep if the system allows it.
    sl_power_manager_sleep();
#endif
  }
#endif // SL_CATALOG_KERNEL_PRESENT
}
