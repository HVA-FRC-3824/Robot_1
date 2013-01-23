// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::drivetrainFrontRight = NULL;
SpeedController* RobotMap::drivetrainFrontLeft = NULL;
SpeedController* RobotMap::drivetrainBackRight = NULL;
SpeedController* RobotMap::drivetrainBackLeft = NULL;
RobotDrive* RobotMap::drivetrainHolonomic = NULL;
AnalogChannel* RobotMap::drivetrainUltrasonicSensor = NULL;
SpeedController* RobotMap::shooterShooterTalon2 = NULL;
SpeedController* RobotMap::shooterShooterTalon1 = NULL;
SpeedController* RobotMap::shooterAngleVictor = NULL;
AnalogChannel* RobotMap::shooterShooterAngleChecker = NULL;
SpeedController* RobotMap::shooterShooterFinger = NULL;
Relay* RobotMap::shooterFeederSpike = NULL;
DigitalInput* RobotMap::shooterFeederSwitch = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	drivetrainFrontRight = new Victor(1, 3);
	lw->AddActuator("Drivetrain", "Front Right", (Victor*) drivetrainFrontRight);
	
	drivetrainFrontLeft = new Victor(1, 1);
	lw->AddActuator("Drivetrain", "Front Left", (Victor*) drivetrainFrontLeft);
	
	drivetrainBackRight = new Victor(1, 4);
	lw->AddActuator("Drivetrain", "Back Right", (Victor*) drivetrainBackRight);
	
	drivetrainBackLeft = new Victor(1, 2);
	lw->AddActuator("Drivetrain", "Back Left", (Victor*) drivetrainBackLeft);
	
	drivetrainHolonomic = new RobotDrive(drivetrainFrontLeft, drivetrainBackLeft,
              drivetrainFrontRight, drivetrainBackRight);
	
	drivetrainHolonomic->SetSafetyEnabled(true);
        drivetrainHolonomic->SetExpiration(0.1);
        drivetrainHolonomic->SetSensitivity(0.5);
        drivetrainHolonomic->SetMaxOutput(1.0);
        drivetrainHolonomic->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
        drivetrainHolonomic->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	drivetrainUltrasonicSensor = new AnalogChannel(1, 2);
	lw->AddSensor("Drivetrain", "Ultrasonic Sensor", drivetrainUltrasonicSensor);
	
	shooterShooterTalon2 = new Talon(1, 6);
	lw->AddActuator("Shooter", "Shooter Talon 2", (Talon*) shooterShooterTalon2);
	
	shooterShooterTalon1 = new Talon(1, 5);
	lw->AddActuator("Shooter", "Shooter Talon 1", (Talon*) shooterShooterTalon1);
	
	shooterAngleVictor = new Victor(1, 7);
	lw->AddActuator("Shooter", "Angle Victor", (Victor*) shooterAngleVictor);
	
	shooterShooterAngleChecker = new AnalogChannel(1, 1);
	lw->AddSensor("Shooter", "Shooter Angle Checker", shooterShooterAngleChecker);
	
	shooterShooterFinger = new Victor(1, 8);
	lw->AddActuator("Shooter", "Shooter Finger", (Victor*) shooterShooterFinger);
	
	shooterFeederSpike = new Relay(1, 1);
	lw->AddActuator("Shooter", "Feeder Spike", shooterFeederSpike);
	
	shooterFeederSwitch = new DigitalInput(1, 1);
	lw->AddSensor("Shooter", "Feeder Switch", shooterFeederSwitch);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
