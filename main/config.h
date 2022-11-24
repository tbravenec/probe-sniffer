#ifndef CONFIG
#define CONFIG

#define CONFIG_GPIO_BUTTON_PIN 0
#define CONFIG_GPIO_LED_PIN 33

#define CONFIG_GPIO_LED_ON 0
#define CONFIG_GPIO_LED_OFF 1

#define CONFIG_WIFI_SSID "SSID"
#define CONFIG_WIFI_PASSWORD "PASSWORD"

#define CONFIG_SD_MOUNT_POINT "/sdcard"
#define CONFIG_SD_1_LINE true

#define CONFIG_PCAP_FILENAME_MASK "PRX_%06d.pcap"
#define CONFIG_CSI_FILENAME_MASK "CSIX_%06d.csv"

#define CONFIG_SNIFFER_TASK_STACK_SIZE 4096
#define CONFIG_SNIFFER_TASK_PRIORITY 2
#define CONFIG_SNIFFER_WORK_QUEUE_LEN 128
#define CONFIG_SNIFFER_DEFAULT_CHANNEL 2

#define CONFIG_CSI_TASK_STACK_SIZE 8192
#define CONFIG_CSI_TASK_PRIORITY 2
#define CONFIG_CSI_WORK_QUEUE_LEN 64

#define CONFIG_SNIFFER_USE_MAC_FILTER 1
#define CONFIG_SNIFFER_MAC_FILTER_B1 0x58
#define CONFIG_SNIFFER_MAC_FILTER_B2 0xBF
#define CONFIG_SNIFFER_MAC_FILTER_B3 0x25
#define CONFIG_SNIFFER_MAC_FILTER_B4 0x82
#define CONFIG_SNIFFER_MAC_FILTER_B5 0xF2
#define CONFIG_SNIFFER_MAC_FILTER_B6 0x74

#define CONFIG_ALL_CHANNEL_SCAN 1

#define CONFIG_SAVE_FREQUENCY_MINUTES 60

#endif