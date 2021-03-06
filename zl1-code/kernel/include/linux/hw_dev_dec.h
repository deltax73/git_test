#ifndef _ZEUSIS_DEV_DCT_H_
#define _ZEUSIS_DEV_DCT_H_

/* PERIPHIAL : periphial */

/* hw device list */
enum hw_device_type {
	DEV_PERIPHIAL_START,
	DEV_PERIPHIAL_TOUCH_PANEL = DEV_PERIPHIAL_START,// id : 0   order number: 1
	DEV_PERIPHIAL_COMPASS,// 1
	DEV_PERIPHIAL_GG_SENSOR,// 2 	Gravity+Gyroscope Sensor
	DEV_PERIPHIAL_PL_SENSOR,// 3 	Proximity+Light Sensor
	DEV_PERIPHIAL_HALL_SENSOR,// 4
	DEV_PERIPHIAL_CAMERA_MAIN,// 5
	DEV_PERIPHIAL_CAMERA_SLAVE,// 6
	DEV_PERIPHIAL_FFLASH,// 7
	DEV_PERIPHIAL_NFC,// 8
	DEV_PERIPHIAL_RF,// 9
	DEV_PERIPHIAL_PA_RECEIVER,// 10
	DEV_PERIPHIAL_PA_SPEAKER,// 11
	DEV_PERIPHIAL_CHARGER_SMB,// 12 	smb1351
	DEV_PERIPHIAL_CHARGER_PMI,// 13 	pmi8994
	DEV_PERIPHIAL_BATTERY,// 14
	DEV_PERIPHIAL_IRDA,// 15
	DEV_PERIPHIAL_USB_SWITCH,// 16
	DEV_PERIPHIAL_VIBRATOR,// 17
	DEV_PERIPHIAL_FINGERPRINT,// 18
	DEV_CONNECTIVITY_START,// 19
	DEV_CONNECTIVITY_WIFI = DEV_CONNECTIVITY_START,// 19
	DEV_CONNECTIVITY_BT,// 20
	DEV_CONNECTIVITY_FM,// 21
	DEV_CONNECTIVITY_GPS,// 22
	DEV_CONNECTIVITY_MAX,// 23
	DEV_PERIPHIAL_MAX = DEV_CONNECTIVITY_MAX,// 23
};

/* set a device flag as true */
int set_hw_dev_flag( int dev_id );

#endif
