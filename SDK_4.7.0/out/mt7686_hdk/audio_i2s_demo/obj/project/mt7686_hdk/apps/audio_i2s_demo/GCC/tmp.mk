IC_CONFIG                           = mt7686
BOARD_CONFIG                        = mt7686_hdk
MTK_HAL_LOWPOWER_ENABLE             = n

MTK_NO_PSRAM_ENABLE                 = y
# 3 options with psram/flash or not, only 1 option is y, the others should be n 
MTK_MEMORY_WITH_PSRAM_FLASH         = n
MTK_MEMORY_WITHOUT_PSRAM            = y
MTK_MEMORY_WITHOUT_PSRAM_FLASH      = n

MTK_MINICLI_ENABLE                  = y

# debug level: none, error, warning, and info
MTK_DEBUG_LEVEL                     = info

MTK_HIF_GDMA_ENABLE                 = y
MTK_AUDIO_I2S_USE_ES8374            = y
