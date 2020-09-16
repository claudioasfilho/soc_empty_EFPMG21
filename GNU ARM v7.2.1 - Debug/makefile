################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/subdir.mk
-include gecko_sdk_3.0.0/util/third_party/mbedtls/library/subdir.mk
-include gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/subdir.mk
-include gecko_sdk_3.0.0/util/silicon_labs/silabs_core/memory_manager/subdir.mk
-include gecko_sdk_3.0.0/protocol/bluetooth/src/subdir.mk
-include gecko_sdk_3.0.0/protocol/bluetooth/lib/EFR32MG21/GCC/subdir.mk
-include gecko_sdk_3.0.0/platform/service/system/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/power_manager/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/mpu/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/device_init/src/subdir.mk
-include gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/rail_util_rf_path/subdir.mk
-include gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/rail_util_pti/subdir.mk
-include gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/pa-conversions/subdir.mk
-include gecko_sdk_3.0.0/platform/emlib/src/subdir.mk
-include gecko_sdk_3.0.0/platform/emdrv/nvm3/src/subdir.mk
-include gecko_sdk_3.0.0/platform/driver/i2cspm/src/subdir.mk
-include gecko_sdk_3.0.0/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_3.0.0/platform/common/src/subdir.mk
-include gecko_sdk_3.0.0/platform/bootloader/api/subdir.mk
-include gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG21/Source/GCC/subdir.mk
-include gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG21/Source/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/efp/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/board/src/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/ota_dfu/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: soc_empty_EFPMG21.axf

# Tool invocations
soc_empty_EFPMG21.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "/Users/clfilho/SimplicityStudio/v5/soc_empty_EFPMG21/autogen/linkerfile.ld" -Xlinker --gc-sections -Xlinker -Map="soc_empty_EFPMG21.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -o soc_empty_EFPMG21.axf -Wl,--start-group "./app.o" "./app_properties.o" "./main.o" "./autogen/gatt_db.o" "./autogen/sl_bluetooth.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_power_manager_handler.o" "./gecko_sdk_3.0.0/app/bluetooth/common/ota_dfu/sl_ota_dfu.o" "./gecko_sdk_3.0.0/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_3.0.0/hardware/board/src/sl_board_init.o" "./gecko_sdk_3.0.0/hardware/driver/efp/src/sl_efp.o" "./gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG21/Source/GCC/startup_efr32mg21.o" "./gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG21/Source/system_efr32mg21.o" "./gecko_sdk_3.0.0/platform/bootloader/api/btl_interface.o" "./gecko_sdk_3.0.0/platform/bootloader/api/btl_interface_storage.o" "./gecko_sdk_3.0.0/platform/common/src/sl_slist.o" "./gecko_sdk_3.0.0/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_3.0.0/platform/driver/i2cspm/src/sl_i2cspm.o" "./gecko_sdk_3.0.0/platform/emdrv/nvm3/src/nvm3_default_common_linker.o" "./gecko_sdk_3.0.0/platform/emdrv/nvm3/src/nvm3_hal_flash.o" "./gecko_sdk_3.0.0/platform/emdrv/nvm3/src/nvm3_lock.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_assert.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_burtc.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_cmu.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_core.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_emu.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_gpio.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_i2c.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_msc.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_prs.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_rtcc.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_se.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_system.o" "./gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/pa-conversions/pa_conversions_efr32.o" "./gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/pa-conversions/pa_curves_efr32.o" "./gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/rail_util_pti/sl_rail_util_pti.o" "./gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/rail_util_rf_path/sl_rail_util_rf_path.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_emu_s2.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_hfrco.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_hfxo_s2.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_lfxo_s2.o" "./gecko_sdk_3.0.0/platform/service/mpu/src/sl_mpu.o" "./gecko_sdk_3.0.0/platform/service/power_manager/src/sl_power_manager.o" "./gecko_sdk_3.0.0/platform/service/power_manager/src/sl_power_manager_debug.o" "./gecko_sdk_3.0.0/platform/service/power_manager/src/sl_power_manager_hal_s2.o" "./gecko_sdk_3.0.0/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_3.0.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_burtc.o" "./gecko_sdk_3.0.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_prortc.o" "./gecko_sdk_3.0.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtcc.o" "./gecko_sdk_3.0.0/platform/service/system/src/sl_system_init.o" "./gecko_sdk_3.0.0/platform/service/system/src/sl_system_process_action.o" "./gecko_sdk_3.0.0/protocol/bluetooth/src/sl_bt_mbedtls_context.o" "./gecko_sdk_3.0.0/util/silicon_labs/silabs_core/memory_manager/sl_malloc.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_cipher.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_entropy.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_hash.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_key_derivation.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_key_handling.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_signature.o" "./gecko_sdk_3.0.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_util.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/aes.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/bignum.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ccm.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/cipher.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/cipher_wrap.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/cmac.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ctr_drbg.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecdh.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecdsa.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecp.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecp_curves.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/entropy.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/error.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/platform_util.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/sha1.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/sha256.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/sha512.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/threading.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/entropy_rail.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/radioaes.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/radioaes_aes.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/radioaes_ble.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/se_aes.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/se_ccm.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/se_cmac.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/se_ecp.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/se_management.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/se_sha.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/se_trng.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/shax.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/sl_mbedtls.o" "/Applications/SimplicityStudio5.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//platform/emdrv/nvm3/lib/libnvm3_CM33_gcc.a" "/Applications/SimplicityStudio5.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//protocol/bluetooth/lib/EFR32MG21/GCC/libbluetooth.a" "/Applications/SimplicityStudio5.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//platform/radio/rail_lib/autogen/librail_release/librail_efr32xg21_gcc_release.a" "/Applications/SimplicityStudio5.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//protocol/bluetooth/lib/EFR32MG21/GCC/binapploader.o" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: soc_empty_EFPMG21.hex'
	arm-none-eabi-objcopy -O ihex "soc_empty_EFPMG21.axf" "soc_empty_EFPMG21.hex"
	@echo ' '

	@echo 'Building bin file: soc_empty_EFPMG21.bin'
	arm-none-eabi-objcopy -O binary "soc_empty_EFPMG21.axf" "soc_empty_EFPMG21.bin"
	@echo ' '

	@echo 'Building s37 file: soc_empty_EFPMG21.s37'
	arm-none-eabi-objcopy -O srec "soc_empty_EFPMG21.axf" "soc_empty_EFPMG21.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "soc_empty_EFPMG21.axf" -A
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) soc_empty_EFPMG21.axf
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
