/*
 * FEDashLCD.h
 *
 *  Created on: Oct 11, 2015
 *      Author: thomaswillson
 */

#ifndef FEDASHLCD_H_
#define FEDASHLCD_H_

#include "DashLCD.h"

static const char PROGMEM WarningMessage_ControllerTemperature[] = "CONTROLLER WARM: %.2fC";
static const char PROGMEM WarningMessage_MotorTemperature[] = "MOTOR WARM: %.2fC";
static const char PROGMEM WarningMessage_BatteryTemperature[] = "BATTERY WARM: %.2fC";
static const char PROGMEM WarningMessage_BatteryLowVoltage[] = "PACK LOW VOLTAGE: %.2fV";
static const char PROGMEM WarningMessage_LVBattery[] = "GLV LOW VOLTAGE: %.2fV";
static const char PROGMEM WarningMessage_sbRIOTemperature[] = "sbRIO WARM: %.0fC";
static const char PROGMEM WarningMessage_Precharge[] = "HV PRECHARGING: %.0fV";
static const char PROGMEM WarningMessage_Invalid[] = "INVALID MSG";
static const char PROGMEM WarningMessage_BSPD[] = "BSPD ERROR";
static const char PROGMEM WarningMessage_IMD[] = "IMD ERROR";
static const char PROGMEM WarningMessage_RemotePit[] = "Remote Request";
static const char PROGMEM WarningMessage_EStop[] = "An E-Stop is Pressed";
static const char PROGMEM WarningMessage_NoCellComms[] = "NO CELL COMMS";
static const char PROGMEM WarningMessage_MCOverSpeed[] = "MC Over Speed";
static const char PROGMEM WarningMessage_MCOverCurrent[] = "MC Over Current";
static const char PROGMEM WarningMessage_MCOverVoltage[] = "MC Over Voltage";
static const char PROGMEM WarningMessage_MCOverTemp[] = "MC Inverter Overtemp";
static const char PROGMEM WarningMessage_MCDirectionCommand[] = "MC Direction Error";
static const char PROGMEM WarningMessage_MCInverterResponseTimeout[] = "MC Inverter Timeout";
static const char PROGMEM WarningMessage_MCDesatFault[] = "MC Desat Fault";
static const char PROGMEM WarningMessage_MCHardwareOverCurrentFault[] = "MC HW Over-Current";
static const char PROGMEM WarningMessage_MCUnderVoltage[] = "MC Under Voltage";
static const char PROGMEM WarningMessage_MCCommandMessageLost[] = "MC Command Message Lost";
static const char PROGMEM WarningMessage_MCMotorOverTemp[] = "Motor Over Temp";
static const char PROGMEM WarningMessage_MCModAOverTemp[] = "Module A Overtemp";
static const char PROGMEM WarningMessage_MCModBOverTemp[] = "Module B Overtemp";
static const char PROGMEM WarningMessage_MCModCOverTemp[] = "Module C Overtemp";
static const char PROGMEM WarningMessage_MCPCBOverTemp[] = "PCB Overtemp";
static const char PROGMEM WarningMessage_MCGateDrv1OverTemp[] = "Gate DRV 1 Overtemp";
static const char PROGMEM WarningMessage_MCGateDrv2OverTemp[] = "Gate DRV 2 Overtemp";
static const char PROGMEM WarningMessage_MCGateDrv3OverTemp[] = "Gate DRV 3 Overtemp";
static const char PROGMEM WarningMessage_MCCurrentSensorFault[] = "MC Curr Sensor Fault";
static const char PROGMEM WarningMessage_MCResolverNotConnected[] = "Resolver Not Connected";
static const char PROGMEM WarningMessage_ShutdownLatchTripped[] = "Shutdown Latch Tripped";
static const char PROGMEM WarningMessage_UnknownBMS[] = "Unknown BMS Error";
static const char PROGMEM WarningMessage_RemoteEmergency[] = "REMOTE EMERGENCY SHUTDOWN";

static const char PROGMEM RotaryRed1[] = "MC Off";
static const char PROGMEM RotaryRed2[] = "120Nm";
static const char PROGMEM RotaryRed3[] = "160Nm";
static const char PROGMEM RotaryRed4[] = "160Nm w/ Regen";
static const char PROGMEM RotaryRed5[] = "240Nm Constant Power";
static const char PROGMEM RotaryRed6[] = "Unused";
static const char PROGMEM RotaryRed7[] = "Unused";
static const char PROGMEM RotaryRed8[] = "Unused";
static const char PROGMEM RotaryRedUnused[] = "Unused";

PGM_P const RotaryRedStringTable[] PROGMEM =
{
	RotaryRed1, RotaryRed2, RotaryRed3, RotaryRed4, RotaryRed5, RotaryRed6, RotaryRed7, RotaryRed8, RotaryRedUnused, RotaryRedUnused, RotaryRedUnused, RotaryRedUnused
};

static const char PROGMEM RotaryYellow1[] = "Invalid";
static const char PROGMEM RotaryYellow2[] = "Invalid";
static const char PROGMEM RotaryYellow3[] = "Invalid";
static const char PROGMEM RotaryYellow4[] = "Invalid";
static const char PROGMEM RotaryYellow5[] = "Invalid";
static const char PROGMEM RotaryYellow6[] = "Invalid";
static const char PROGMEM RotaryYellow7[] = "Invalid";
static const char PROGMEM RotaryYellow8[] = "Invalid";
static const char PROGMEM RotaryYellowUnused[] = "Invalid";

PGM_P const RotaryYellowStringTable[] PROGMEM = {RotaryYellow1, RotaryYellow2,
	RotaryYellow3, RotaryYellow4, RotaryYellow5, RotaryYellow6, RotaryYellow7,
	RotaryYellow8, RotaryYellowUnused, RotaryYellowUnused, RotaryYellowUnused,
	RotaryYellowUnused};

static const char PROGMEM RotaryBlack1[] = "Driving";
static const char PROGMEM RotaryBlack2[] = "Charging";
static const char PROGMEM RotaryBlack3[] = "Unused";
static const char PROGMEM RotaryBlack4[] = "Unused";
static const char PROGMEM RotaryBlack5[] = "Unused";
static const char PROGMEM RotaryBlack6[] = "Unused";
static const char PROGMEM RotaryBlack7[] = "Unused";
static const char PROGMEM RotaryBlack8[] = "Unused";
static const char PROGMEM RotaryBlackUnused[] = "Unused";

PGM_P const RotaryBlackStringTable[] PROGMEM =
{
	RotaryBlack1, RotaryBlack2, RotaryBlack3, RotaryBlack4, RotaryBlack5, RotaryBlack6, RotaryBlack7, RotaryBlack8, RotaryBlackUnused, RotaryBlackUnused,RotaryBlackUnused,RotaryBlackUnused
};

static const size_t STATE_MAX_DESC_LENGTH = 30;

static const char PROGMEM MCState0[] = "SC.Initial";
static const char PROGMEM MCState1[] = "SC.History";
static const char PROGMEM MCState2[] = "SC.ShallowHistory";
static const char PROGMEM MCState3[] = "SC.Terminal";
static const char PROGMEM MCState4[] = "TransDiag";
static const char PROGMEM MCState5[] = "CurrentDrop";
static const char PROGMEM MCState6[] = "Enabled";
static const char PROGMEM MCState7[] = "Disabled";

PGM_P const MCStateStringTable[] PROGMEM =
{
	MCState0, MCState1, MCState2, MCState3, MCState4, MCState5, MCState6, MCState7
};

static const char PROGMEM ShutdownState0[] = "SC.Initial";
static const char PROGMEM ShutdownState1[] = "SC.History";
static const char PROGMEM ShutdownState2[] = "SC.ShallowHistory";
static const char PROGMEM ShutdownState3[] = "SC.Terminal";
static const char PROGMEM ShutdownState4[] = "AIR's & Coolant On";
static const char PROGMEM ShutdownState5[] = "AIR's On";
static const char PROGMEM ShutdownState6[] = "Precharge";
static const char PROGMEM ShutdownState7[] = "TSMS Off";

PGM_P const ShutdownStateStringTable[] PROGMEM =
{
	ShutdownState0, ShutdownState1, ShutdownState2, ShutdownState3, ShutdownState4, ShutdownState5, ShutdownState6, ShutdownState7
};

static const size_t BMS_CHARGING_STATE_MAX_LENGTH = 15;

static const char PROGMEM BMSChargingState0[] = "Disconnected";
static const char PROGMEM BMSChargingState1[] = "Pre-Charging";
static const char PROGMEM BMSChargingState2[] = "Main Charge";
static const char PROGMEM BMSChargingState3[] = "Balancing";
static const char PROGMEM BMSChargingState4[] = "Charge Finished";
static const char PROGMEM BMSChargingState5[] = "Charging Error";

PGM_P const BMSChargingStateStringTable[] PROGMEM =
{
	BMSChargingState0, BMSChargingState1, BMSChargingState2, BMSChargingState3, BMSChargingState4, BMSChargingState5
};

static const size_t BMS_CHARGING_ERROR_MAX_LENGTH = 50;

static const char PROGMEM BMSChargingError0[] = "No Error";
static const char PROGMEM BMSChargingError1[] = "No Cell Comms";
static const char PROGMEM BMSChargingError2[] = "No Cell Comms";
static const char PROGMEM BMSChargingError3[] = "Maximum Duration Exceeded";
static const char PROGMEM BMSChargingError4[] = "No Cell Comms";
static const char PROGMEM BMSChargingError5[] = "Cannot Set Balancing";
static const char PROGMEM BMSChargingError6[] = "Cell Temps Too High";
static const char PROGMEM BMSChargingError7[] = "No Cell Comms";
static const char PROGMEM BMSChargingError8[] = "Num Cells Mismatch";
static const char PROGMEM BMSChargingError9[] = "Cells Overvoltage";
static const char PROGMEM BMSChargingError10[] = "Cell Protection Event";

PGM_P const BMSChargingErrorStringTable[] PROGMEM =
{
	BMSChargingError0, BMSChargingError1, BMSChargingError2, BMSChargingError3, BMSChargingError4, BMSChargingError5, BMSChargingError6, BMSChargingError7, BMSChargingError8, BMSChargingError9, BMSChargingError10
};

class FEDashLCD: public DashLCD {
public:
	enum class DashPages
		: uint8_t {
			WaitingForCAN, Driving, LapTrigger, Warning, Systems, Brakes, Charging, Suspension, Drivetrain, Performance,
	};

	enum class MCControlState
		: uint8_t {
			SC_Initial, SC_History, SC_ShallowHistory, SC_Terminal, BroadcastDiag, CurrentDrop, Enabled, Disabled
	};

	enum class ShutdownState
		: uint8_t {
			SC_Initial, SC_History, SC_ShallowHistory, SC_Terminal, AIR_Coolant_On, AIR_On, Precharge, TSMS_Off
	};

	enum class WarningSeverity
		: uint8_t {
			Okay, ShortWarning, LongWarning, ReturnToPits, Error, Danger
	};

	enum class eBMSChargingState
		: uint8_t {
			Disconnected, PreCharging, MainCharging, Balancing, ChargeFinishedOK, ChargingError
	};

	enum class eBMSLastChargeError
		: uint8_t {
			NoError,
		NoCellCommunication,
		NoCellCommunicationNoCAN,
		ChargeDurationExceeded,
		CellCommunicationLostDuringCharge,
		CannotSetBalancingVoltage,
		CellTempsTooHigh,
		NoCellCommsSoNoTemp,
		CellNumberMismatch,
		CellOvervoltage,
		CellProtectionEvent
	};

	enum class WarningMessage
		: uint8_t {
			ControllerTemperature,
		MotorTemperature,
		BatteryTemperature,
		BatteryLowVoltage,
		LVBattery,
		sbRIOTemperature,
		Precharge,
		BSPD,
		IMD,
		RemoteReturnToPits,
		EStopInterrupted,
		NoCellComms,
		MCOverSpeed,
		MCOverCurrent,
		MCOverVoltage,
		MCOverTemp,
		MCDirectionCommand,
		MCInverterResponseTimeout,
		MCDesatFault,
		MCHardwareOverCurrentFault,
		MCUnderVoltage,
		MCCommandMessageLost,
		MCMotorOverTemp,
		MCModAOverTemp,
		MCModBOverTem,
		MCModCOverTemp,
		MCPCBOverTemp,
		MCGateDrv1OverTemp,
		MCGateDrv2OverTemp,
		MCDateDrv3OverTemp,
		MCCurrentSensorFault,
		MCResolverNotConnected,
		ShutdownLatchTripped,
		UnknownBMS,
		RemoteEmergency
	};

	typedef union DashPage {
		uint8_t NDashPage;
		DashPages dashPage;
	} DashPage;

	typedef struct WarningCANMessage { //0xF1
		uint8_t NDashPage; //Required
		WarningSeverity warningSeverity;
		float associatedValue;
		WarningMessage warningMessage;
		uint8_t notOK;
	} WarningCANMessage;

	typedef struct DashCAN1Driving {
		uint16_t TMC;
		uint16_t TMotor;
		uint16_t TCellMax;
		uint16_t rBrakeBalLast;
	} DashCAN1Driving;

	typedef struct DashCAN1Charging {
		uint16_t TCellMin;
		uint16_t TCellMax;
		uint16_t VCellMin;
		uint16_t VCellMax;
	} DashCAN1Charging;

	typedef struct DashCAN2Driving {
		MCControlState eMCControlState;
		ShutdownState eShutdownState;
		uint16_t vCar;
		uint16_t tCurrentDelta;
		uint16_t VCellMin;
	} DashCAN2Driving;

	typedef struct DashCAN2Charging {
		uint16_t TCellMean;
		uint16_t VCellMean;
		uint16_t VTotal;
		eBMSChargingState chargingState;
		eBMSLastChargeError chargeError;
	} DashCAN2Charging;

	typedef struct DashCAN1Trig {
		uint32_t tLastLap;
		uint32_t tLastLapDelta;
	} DashCAN3Driving;

	typedef struct DashCAN1Systems {
		uint16_t TMCMax;
		uint16_t TMotorMax;
		uint16_t TCellMaxMax;
		uint16_t VBatteryMin;
	} DashCAN1Systems;

	typedef struct DashCAN2Systems {
		uint16_t VBattery;
	} DashCAN2Systems;

	typedef struct DashCAN1Brakes {
		uint16_t pBrakeF;
		uint16_t pBrakeR;
		uint16_t rBrakeBal;
		uint16_t pBrakeFMax;
	} DashCAN1Brakes;

	typedef struct DashCAN2Brakes {
		uint16_t pBrakeRMax;
		uint16_t rBrakeBalMin;
		uint16_t rBrakeBalmax;
	} DashCAN2Brakes;

	typedef struct DashCAN3Charging {
		uint16_t VChargerSetpoint;
		uint16_t IChargerSetpoint;
		uint16_t VChargerActual;
		uint16_t IChargerActual;
	} DashCAN3Charging;

	typedef struct DashCAN4Charging {
		uint8_t bChargerConnected;
	} DashCAN4Charging;

	typedef union DashCAN1 { //0xF0
		uint8_t data[8];
		DashCAN1Driving driving;
		DashCAN1Trig trig;
		DashCAN1Systems systems;
		DashCAN1Brakes brakes;
		DashCAN1Charging charging;
	} DashCAN1;

	typedef union DashCAN2 { //0xF2
		uint8_t data[8];
		DashCAN2Driving driving;
		DashCAN2Systems systems;
		DashCAN2Brakes brakes;
		DashCAN2Charging charging;
	} DashCAN2;

	typedef union DashCAN3 { //0xF3
		uint8_t data[8];
		DashCAN3Charging charging;
	} DashCAN3;

	typedef union DashCAN4 { //0xF4
		uint8_t data[8];
		DashCAN4Charging charging;
	} DashCAN4;

	DashCAN1 *dashCAN1 = (DashCAN1 *) dashCAN1Data;
	DashCAN2 *dashCAN2 = (DashCAN2 *) dashCAN2Data;
	DashCAN3 *dashCAN3 = (DashCAN3 *) dashCAN3Data;
	DashCAN4 *dashCAN4 = (DashCAN4 *) dashCAN4Data;
	WarningCANMessage *warningCAN = (WarningCANMessage *) warningCANData;
	DashPage *dashPage = (DashPage *) &DashboardData.NDashPage;

	virtual ~FEDashLCD() {
		return;
	}

	void updateDashboard() {
		switch (CPFERotarySwitch::getPosition(CPFERotarySwitch::RotarySwitches::BLACK)) {
		case 0:
			driving();
			break;
		case 1:
			charging();
			break;
		default:
			driving();
			break;
		}

		_delay_ms(20.0);
	}

protected:
	PGM_P blackRotaryString(int position) {
		return (PGM_P) pgm_read_word(&(RotaryBlackStringTable[position]));
	}
	PGM_P yellowRotaryString(int position) {
		return (PGM_P) pgm_read_word(&(RotaryYellowStringTable[position]));
	}
	PGM_P redRotaryString(int position) {
		return (PGM_P) pgm_read_word(&(RotaryRedStringTable[position]));
	}

	float random(float range) {
		return (((float)rand() / (float)RAND_MAX) * range * 2) - range;
	}

	void brakes() {

	}

	void drivetrain() {

	}

	void charging() {
		static float TCellMax=30.3, TCellMin=22.6, VCellMax=4.1, VCellMin=3.2, TCellMean=25.6,
		VCellMean=4.01, VTotal=276.69, VChargerSetpoint=0.0, IChargerSetpoint=0.0, VChargerActual=0.0, IChargerActual=0.0;

		TCellMax += random(0.2);
		TCellMin += random(0.2);
		VCellMax += random(0.2);
		VCellMin += random(0.2);
		TCellMean += random(0.1);
		VCellMean += random(0.1);
		VTotal += random(0.1);

		char BMSChargingState[BMS_CHARGING_STATE_MAX_LENGTH];
		char BMSChargingError[BMS_CHARGING_ERROR_MAX_LENGTH];

		strncpy_P(BMSChargingState, (PGM_P) pgm_read_word(&(BMSChargingStateStringTable[0])), BMS_CHARGING_STATE_MAX_LENGTH);
		strncpy_P(BMSChargingError, (PGM_P) pgm_read_word(&(BMSChargingErrorStringTable[0])), BMS_CHARGING_ERROR_MAX_LENGTH);

		LCD.DLStart();

		LCD.ClearColorRGB(0x000000);
		LCD.Clear(1, 1, 1);

		LCD.ColorRGB(0x00, 0xFF, 0xFF);
		LCD.PrintText(5, 0, 28, 0, "TCellMax: %.2f", TCellMax);
		LCD.PrintText(5, 25, 28, 0, "TCellMin: %.2f", TCellMin);
		LCD.PrintText(5, 50, 28, 0, "TCellMean: %.2f", TCellMean);
		LCD.PrintText(5, 75, 28, 0, "VCellMax: %.2f", VCellMax);
		LCD.PrintText(5, 100, 28, 0, "VCellMin: %.2f", VCellMin);
		LCD.PrintText(5, 125, 28, 0, "VCellMean: %.2f", VCellMean);
		LCD.PrintText(5, 150, 28, 0, "VTotal: %.2f", VTotal);
		LCD.PrintText(5, 175, 28, 0, "Charging State: %s", BMSChargingState);
		LCD.PrintText(5, 200, 28, 0, "Last Charging Error: %s", BMSChargingError);
		LCD.PrintText(190, 0, 28, 0, "VChargerSetpoint: %.2f", VChargerSetpoint);
		LCD.PrintText(190, 25, 28, 0, "IChargerSetpoint: %.2f", IChargerSetpoint);
		LCD.PrintText(190, 50, 28, 0, "VChargerActual: %.2f", VChargerActual);
		LCD.PrintText(190, 75, 28, 0, "IChargerActual: %.2f", IChargerActual);
		LCD.PrintText(190, 100, 28, 0, "bChargerConnected: %s", dashCAN4->charging.bChargerConnected ? "Yes" : "No");

		LCD.DLEnd();
		LCD.Finish();
	}

	void performance() {

	}

	void systems() {

	}

	void warning() {
		bool displayBoxes;
		const char *severityText;
		uint32_t color = 0x00000;
		float associatedValue;

		associatedValue = swap(warningCAN->associatedValue);

		switch (warningCAN->warningSeverity) {
			case WarningSeverity::ShortWarning:
			case WarningSeverity::LongWarning:
			displayBoxes = millis() % 500 > 250;
			severityText = "WARNING!";
			color = 0xFFFF00;
			break;
			case WarningSeverity::Error:
			displayBoxes = millis() % 500 > 250;
			severityText = "ERROR!";
			color = 0xFF0000;
			break;
			case WarningSeverity::Danger:
			displayBoxes = true;
			severityText = "DANGER!";
			if (millis() % 600 > 450)
			color = 0xFFFF00;
			else if (millis() % 600 > 300)
			color = 0x00FF00;
			else if (millis() % 600 > 150)
			color = 0x000000;
			else
			color = 0xFF0000;
			break;
			case WarningSeverity::ReturnToPits:
			displayBoxes = true;
			severityText = "Return to Pits";
			color = 0xFFFF00;
			break;
			default:
			displayBoxes = true;
			severityText = "Unknown Severity";
		}

		LCD.DLStart();

		LCD.ClearColorRGB(0xFFFFFF);
		LCD.Clear(1, 1, 1);

		LCD.ColorRGB(0x000000);
		LCD.PrintText(FT_DISPLAYWIDTH / 2, FT_DISPLAYHEIGHT / 4, 31, FT_OPT_CENTER, severityText);
		LCD.PrintTextFlash(FT_DISPLAYWIDTH / 2, FT_DISPLAYHEIGHT - 100, 29, FT_OPT_CENTER, warningMessageToString(warningCAN->warningMessage), associatedValue);

		if (displayBoxes) {
			LCD.ClearColorRGB(color);
			LCD.ScissorSize(75, FT_DISPLAYHEIGHT);
			LCD.ScissorXY(0, 0);
			LCD.Clear(1, 1, 1);
			LCD.ScissorXY(FT_DISPLAYWIDTH - 75, 0);
			LCD.Clear(1, 1, 1);
		}

		LCD.DLEnd();
		LCD.Finish();
	}

	void driving() {
		enum class DrivingState : uint8_t {
			stopped, carOn, accel, decel
		};

		static DrivingState drivingState = DrivingState::stopped;
		static float TMC = 25.6, TMotor = 25.1, TCellMax = 25.3, rBrakeBalLast = 0.0, vCar = 0, tCurrentDelta = 0.0, VCellMin = 4.1;
		float tTMC = 25.6, tTMotor = 25.1, tTCellMax = 25.3, trBrakeBalLast = 0.0, tvCar = 0, ttCurrentDelta = 0.0, tVCellMin = 4.1;
		static uint16_t iterCounter = 0;
		constexpr uint16_t LOOP_FREQ = 20;
		char ShutdownStateDesc[STATE_MAX_DESC_LENGTH];
		char MCControlStateDesc[STATE_MAX_DESC_LENGTH];

		static MCControlState mcState = MCControlState::Disabled;
		static ShutdownState shutdownState = ShutdownState::TSMS_Off;

		switch(drivingState) {
			case DrivingState::stopped:
				vCar = 0;
				tCurrentDelta = 0.0;
				mcState = MCControlState::Disabled;
				shutdownState = ShutdownState::TSMS_Off;

				if (TMC > 25.0) {
					TMC -= 1 + random(.2);
				}

				if (TMotor > 25.0) {
					TMotor -= 1 + random(.2);
				}

				if (TCellMax > 25.0) {
					TCellMax -= 1 + random(.2);
				}

				if (VCellMin < 3.9) {
					VCellMin += .1 + random(.03);
				}

				if (iterCounter > LOOP_FREQ * 3) {
					drivingState = DrivingState::carOn;
					iterCounter = 0;
				}
				break;
			case DrivingState::carOn:
				mcState = MCControlState::Disabled;
				shutdownState = ShutdownState::AIR_On;

				if (TMC > 25.0) {
					TMC -= .01 + random(.001);
				}

				if (TMotor > 25.0) {
					TMotor -= .01 + random(.001);
				}

				if (TCellMax > 25.0) {
					TCellMax -= .01 + random(.001);
				}

				if (VCellMin < 3.9) {
					VCellMin += .001 + random(.001);
				}

				if (iterCounter > LOOP_FREQ * 1) {
					drivingState = DrivingState::accel;
					iterCounter = 0;
				}
				break;
			case DrivingState::accel:
				mcState = MCControlState::Enabled;
				shutdownState = ShutdownState::AIR_On;
				vCar += 1;
				tCurrentDelta -= .005;

				if (TMC < 85.0) {
					TMC += .2;
				}

				if (TMotor < 100.0) {
					TMotor += .2;
				}

				if (TCellMax < 50.0) {
					TCellMax += .1;
				}

				if (VCellMin > 3.5) {
					VCellMin -= .01;
				}

				if (iterCounter > LOOP_FREQ * 7) {
					drivingState = DrivingState::decel;
					iterCounter = 0;
				}
				break;
			case DrivingState::decel:
				mcState = MCControlState::Enabled;
				shutdownState = ShutdownState::AIR_On;
				if (vCar > 0) {
					vCar -= 1;
				}
				else {
					vCar = 0;
				}

				tCurrentDelta -= .005;

				if (TMC > 25.0) {
					TMC -= .1 + random(.001);
				}

				if (TMotor > 25.0) {
					TMotor -= .1 + random(.001);
				}

				if (TCellMax > 25.0) {
					TCellMax -= .05 + random(.001);
				}

				if (VCellMin < 3.9) {
					VCellMin += .001 + random(.001);
				}

				if (iterCounter > LOOP_FREQ * 5) {
					drivingState = DrivingState::stopped;
					iterCounter = 0;
				}
				break;
		}

		++iterCounter;

		strncpy_P(ShutdownStateDesc, (PGM_P) pgm_read_word(&(ShutdownStateStringTable[(uint8_t) shutdownState])), STATE_MAX_DESC_LENGTH);
		strncpy_P(MCControlStateDesc, (PGM_P) pgm_read_word(&(MCStateStringTable[(uint8_t) mcState])), STATE_MAX_DESC_LENGTH);

		tTMC = random(.05) + TMC;
		tTMotor = random(.05) + TMotor;
		tTCellMax = random(.05) + TCellMax;
		trBrakeBalLast = rBrakeBalLast;
		tvCar = vCar == 0 ? 0.0 : random(0.1) + vCar;
		ttCurrentDelta = random(.01) + tCurrentDelta;
		tVCellMin = random(.05) + VCellMin;

		LCD.DLStart();

		LCD.ColorRGB(0x00, 0xFF, 0xFF);
		LCD.PrintText(5, 0, 28, 0, "TMC: %.2f", tTMC);
		LCD.PrintText(5, 25, 28, 0, "TMotor: %.2f", tTMotor);
		LCD.PrintText(5, 50, 28, 0, "TCellMax: %.2f", tTCellMax);
		LCD.PrintText(5, 75, 28, 0, "rBrakeBalLast: %.2f", trBrakeBalLast);
		LCD.PrintText(5, 100, 28, 0, "vCar: %.2f", tvCar);
		LCD.PrintText(5, 125, 28, 0, "VCellMin: %.2f", tVCellMin);
		LCD.PrintText(5, 150, 28, 0, "eMCControlState: %s", MCControlStateDesc);
		LCD.PrintText(5, 175, 28, 0, "eShutdownState: %s", ShutdownStateDesc);

		LCD.ColorRGB(0xFFFFFF);
		LCD.PrintText(5, 200, 30, 0, "%.1f", ttCurrentDelta);

		LCD.ColorRGB(0xFFFFFF);
		LCD.Cmd_FGColor(0xFF0000);
		LCD.Cmd_BGColor(0xFF0000);
		LCD.Cmd_Slider(FT_DISPLAYWIDTH - 30, 20, 20, 180, 0, 100 - (uint16_t) tTMotor, 100);
		LCD.ColorRGB(0xFF0000);
		LCD.PrintText(FT_DISPLAYWIDTH - 20, 240, 31, FT_OPT_CENTER, "M");

		LCD.ColorRGB(0xFFFFFF);
		LCD.Cmd_FGColor(0xFF0000);
		LCD.Cmd_BGColor(0xFF0000);
		LCD.Cmd_Slider(FT_DISPLAYWIDTH - 90, 20, 20, 180, 0, 100 - (uint16_t) tTMC, 100);
		LCD.ColorRGB(0xFF0000);
		LCD.PrintText(FT_DISPLAYWIDTH - 80, 240, 31, FT_OPT_CENTER, "C");

		LCD.DLEnd();
		LCD.Finish();

		_delay_ms(50.0);
	}

	void lapTrigger() {
		uint32_t time = dashCAN1->trig.tLastLap;
		int32_t delta = dashCAN1->trig.tLastLapDelta;

		uint8_t lMin = time / 60000;
		time -= lMin * 60000;
		uint8_t lSec = time / 1000;
		time -= lSec * 1000;

		int8_t dMin = delta / 60000;
		delta -= dMin * 60000;
		int8_t dSec = delta / 1000;
		delta -= dSec * 1000;

		LCD.DLStart();
		LCD.ClearColorRGB(0xFFFFFF);
		LCD.Clear(1, 1, 1);

		LCD.ColorRGB(0x000000);
		LCD.PrintText(FT_DISPLAYWIDTH / 2, FT_DISPLAYHEIGHT / 4, 31, FT_OPT_CENTER, "tLastLap: %02d:%02d.%03d", lMin, lSec, time);
		LCD.PrintText(FT_DISPLAYWIDTH / 2, FT_DISPLAYHEIGHT * 3 / 4, 31, FT_OPT_CENTER, "tLastLapDelta: %02d:%02d.%03d", dMin, dSec, delta);

		LCD.DLEnd();
		LCD.Finish();
	}

	const char * PROGMEM warningMessageToString(WarningMessage warning) {
		switch (warning) {
			case WarningMessage::BatteryLowVoltage:
			return WarningMessage_BatteryLowVoltage;
			case WarningMessage::BatteryTemperature:
			return WarningMessage_BatteryTemperature;
			case WarningMessage::ControllerTemperature:
			return WarningMessage_ControllerTemperature;
			case WarningMessage::LVBattery:
			return WarningMessage_LVBattery;
			case WarningMessage::MotorTemperature:
			return WarningMessage_MotorTemperature;
			case WarningMessage::Precharge:
			return WarningMessage_Precharge;
			case WarningMessage::sbRIOTemperature:
			return WarningMessage_sbRIOTemperature;
			case WarningMessage::IMD:
			return WarningMessage_IMD;
			case WarningMessage::BSPD:
			return WarningMessage_BSPD;
			case WarningMessage::RemoteReturnToPits:
			return WarningMessage_RemotePit;
			case WarningMessage::EStopInterrupted:
			return WarningMessage_EStop;
			case WarningMessage::NoCellComms:
			return WarningMessage_NoCellComms;
			case WarningMessage::MCOverSpeed:
			return WarningMessage_MCOverSpeed;
			case WarningMessage::MCOverCurrent:
			return WarningMessage_MCOverCurrent;
			case WarningMessage::MCOverVoltage:
			return WarningMessage_MCOverVoltage;
			case WarningMessage::MCOverTemp:
			return WarningMessage_MCOverTemp;
			case WarningMessage::MCDirectionCommand:
			return WarningMessage_MCDirectionCommand;
			case WarningMessage::MCInverterResponseTimeout:
			return WarningMessage_MCInverterResponseTimeout;
			case WarningMessage::MCDesatFault:
			return WarningMessage_MCDesatFault;
			case WarningMessage::MCHardwareOverCurrentFault:
			return WarningMessage_MCHardwareOverCurrentFault;
			case WarningMessage::MCUnderVoltage:
			return WarningMessage_MCUnderVoltage;
			case WarningMessage::MCCommandMessageLost:
			return WarningMessage_MCCommandMessageLost;
			case WarningMessage::MCMotorOverTemp:
			return WarningMessage_MCMotorOverTemp;
			case WarningMessage::MCModAOverTemp:
			return WarningMessage_MCModAOverTemp;
			case WarningMessage::MCModBOverTem:
			return WarningMessage_MCModBOverTemp;
			case WarningMessage::MCModCOverTemp:
			return WarningMessage_MCModCOverTemp;
			case WarningMessage::MCPCBOverTemp:
			return WarningMessage_MCPCBOverTemp;
			case WarningMessage::MCGateDrv1OverTemp:
			return WarningMessage_MCGateDrv1OverTemp;
			case WarningMessage::MCGateDrv2OverTemp:
			return WarningMessage_MCGateDrv2OverTemp;
			case WarningMessage::MCDateDrv3OverTemp:
			return WarningMessage_MCGateDrv3OverTemp;
			case WarningMessage::MCCurrentSensorFault:
			return WarningMessage_MCCurrentSensorFault;
			case WarningMessage::MCResolverNotConnected:
			return WarningMessage_MCResolverNotConnected;
			case WarningMessage::ShutdownLatchTripped:
			return WarningMessage_ShutdownLatchTripped;
			case WarningMessage::UnknownBMS:
			return WarningMessage_UnknownBMS;
			case WarningMessage::RemoteEmergency:
			return WarningMessage_RemoteEmergency;
		}
		return WarningMessage_Invalid;
	}
};

#endif /* FEDASHLCD_H_ */
