// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDriveablePawn.h"

AFGDriveablePawn::AFGDriveablePawn() : Super() {
	this->mShouldAttachDriver = true;
	this->mIsDriverVisible = false;
	this->mDriverSeatSocket = TEXT("None");
	this->mDriverSeatAnimation = nullptr;
	this->mDriverExitOffset.X = 0.0;
	this->mDriverExitOffset.Y = 0.0;
	this->mDriverExitOffset.Z = 0.0;
	this->mDriver = nullptr;
	this->mIsDriving = false;
}
void AFGDriveablePawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGDriveablePawn, mDriver);
	DOREPLIFETIME(AFGDriveablePawn, mIsDriving);
}
void AFGDriveablePawn::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDriveablePawn::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDriveablePawn::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDriveablePawn::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDriveablePawn::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGDriveablePawn::NeedTransform_Implementation(){ return bool(); }
bool AFGDriveablePawn::ShouldSave_Implementation() const{ return bool(); }
void AFGDriveablePawn::PossessedBy(AController* newController){ }
void AFGDriveablePawn::UnPossessed(){ }
bool AFGDriveablePawn::CanDriverEnter( AFGCharacterPlayer* character){ return bool(); }
bool AFGDriveablePawn::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
bool AFGDriveablePawn::DriverLeave(bool keepDriving){ return bool(); }
void AFGDriveablePawn::AttachDriver( AFGCharacterPlayer* driver){ }
bool AFGDriveablePawn::GetSafeExitLocation( AFGCharacterPlayer* exitingCharacter, const FVector& exitOffset, FVector& out_location, FRotator& out_rotation) const{ return bool(); }
void AFGDriveablePawn::OnDrivingStatusChanged(){ }
void AFGDriveablePawn::PlaceExitingDriver(){ }
void AFGDriveablePawn::SetDriving(bool isDriving){ }
void AFGDriveablePawn::OnRep_IsDriving(){ }
