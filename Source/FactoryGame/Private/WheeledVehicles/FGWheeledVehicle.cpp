// This file has been automatically generated by the Unreal Header Implementation tool

#include "WheeledVehicles/FGWheeledVehicle.h"
#include "Hologram/FGWheeledVehicleHologram.h"
#include "Components/SkeletalMeshComponent.h"

void AFGWheeledVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
AFGWheeledVehicle::AFGWheeledVehicle() : Super() {
	this->mWorkBench = nullptr;
	this->mFuelConsumption = 1.0;
	this->mFuelConsumedWhileRecording = 0.0;
	this->mCurrentFuelAmount = 0.0;
	this->mIsLoadingVehicle = false;
	this->mIsUnloadingVehicle = false;
	this->mCurrentFuelClass = nullptr;
	this->mIsInAir = false;
	this->mNumWheelsOnGround = 0;
	this->mVehicleMovement = nullptr;
	this->mDistBetweenDecals = 50.0;
	this->mDecalLifespan = 5.0;
	this->mDefaultTireTrackDecal = nullptr;
	this->mDecalSize.X = 35.0;
	this->mDecalSize.Y = 50.0;
	this->mDecalSize.Z = 1.0;
	this->mFoliageDestroyRadius = 200.0;
	this->mAddedGroundAngularVelocityStrengthYaw = 2.0;
	this->mAddedGroundAngularVelocityStrengthPitch = 0.2;
	this->mAddedAirControlAngularVelocityStrengthYaw = 1.5;
	this->mAddedAirControlAngularVelocityStrengthPitch = 1.4;
	this->mNaturalAngularVelocityStrengthYaw = 1.5;
	this->mNaturalAngularVelocityStrengthPitch = 1.0;
	this->mNaturalAirAngularVelocityStrengthYaw = 1.5;
	this->mNaturalAirAngularVelocityStrengthPitch = 1.0;
	this->mAddedAngularVelocityInputSmoothingSpeed = 0.5;
	this->mFoliageCollideBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FoliageBox"));
	this->mAuthoritativeLocation.X = 0.0;
	this->mAuthoritativeLocation.Y = 0.0;
	this->mAuthoritativeLocation.Z = 0.0;
	this->mAuthoritativeRotation.X = 0.0;
	this->mAuthoritativeRotation.Y = 0.0;
	this->mAuthoritativeRotation.Z = 0.0;
	this->mAuthoritativeRotation.W = 0.0;
	this->mAuthoritativeLinearVel.X = 0.0;
	this->mAuthoritativeLinearVel.Y = 0.0;
	this->mAuthoritativeLinearVel.Z = 0.0;
	this->mSimulationMovement = nullptr;
	this->mFuelInventory = nullptr;
	this->mStorageInventory = nullptr;
	this->mInventorySize = 0;
	this->mTireEffectSocketName = TEXT("");
	this->mTargetList = nullptr;
	this->mTargetNodeLinkedList = nullptr;
	this->mAddedAngularVelocityInputPitch = 0.0;
	this->mAddedAngularVelocityInputYaw = 0.0;
	this->mReverseAddedAngularVelocityYawMultiplier = 1.0;
	this->mHasAirControl = true;
	this->mGroundTraceLength = 300.0;
	this->mMaxDeltaLinearVelocity = 100.0;
	this->mMaxDeltaAngularVelocity = 550.0;
	this->mRollStabilisationStrength = 0.026;
	this->mMaxRollAngleForUpsideDown = 85.0;
	this->mMaxFlatOnGroundRollAngleLimit = 5.0;
	this->mMaxRollForActivationOfAssistedVelocities = 75.0;
	this->mMaxSpeedForAddedAcceleration = 80;
	this->mMaxAssistedAcceleration = 500.0;
	this->mHasAssistedVelocities = false;
	this->mHasRollStabilisation = false;
	this->mDriftingLateralForce = 0.0;
	this->mDriftingUpwardForce = 0.0;
	this->mDriftForwardForceStrengthCurve = nullptr;
	this->mMinAngleForDrift = 7.0;
	this->mCachedSurfaceMaterial = nullptr;
	this->mNeedsFuelToDrive = true;
	this->mTargetPointClass = nullptr;
	this->mGhostingTimeout = 20.0;
	this->mMaxDistanceToSimulation = 500.0;
	this->mSpeedLimit = -1;
	this->mIsFollowingPath = false;
	this->mIsAutopilotEnabled = false;
	this->mIsPossessed = false;
	this->mIsAtStation = false;
	this->mCurrentTarget = nullptr;
	this->mRecordingStatus = ERecordingStatus::RS_NoRecording;
	this->mSimulatedVehicle = nullptr;
	this->mTimeToWaitForFuel = 5.0;
	this->mMinimumTimeAtStation = 10.0;
	this->mIsGhosting = false;
	this->mHasAutomatedFuelConsumption = false;
	this->mActualAutomatedFuelConsumptionSinceStart = 0.0;
	this->mAutomatedFuelConsumptionStart = 0.0;
	this->mAutomatedFuelConsumptionTimeSkipped = 0.0;
	this->mHologramClass = AFGWheeledVehicleHologram::StaticClass();
	this->SetReplicatingMovement(false);
	this->mFoliageCollideBox->SetupAttachment(mMesh);
}
void AFGWheeledVehicle::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGWheeledVehicle::BeginPlay(){ }
void AFGWheeledVehicle::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGWheeledVehicle::Destroyed(){ }
void AFGWheeledVehicle::Tick(float dt){ }
void AFGWheeledVehicle::DisplayDebug( UCanvas* canvas, const FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
bool AFGWheeledVehicle::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
void AFGWheeledVehicle::GainedSignificance_Implementation(){ }
void AFGWheeledVehicle::LostSignificance_Implementation(){ }
bool AFGWheeledVehicle::CanDock_Implementation(EDockStationType atStation) const{ return bool(); }
UFGInventoryComponent* AFGWheeledVehicle::GetDockInventory_Implementation() const{ return nullptr; }
UFGInventoryComponent* AFGWheeledVehicle::GetDockFuelInventory_Implementation() const{ return nullptr; }
void AFGWheeledVehicle::WasDocked_Implementation( AFGBuildableDockingStation* atStation){ }
void AFGWheeledVehicle::WasUndocked_Implementation(){ }
void AFGWheeledVehicle::OnBeginLoadVehicle_Implementation(){ }
void AFGWheeledVehicle::OnBeginUnloadVehicle_Implementation(){ }
void AFGWheeledVehicle::OnTransferComplete_Implementation(){ }
void AFGWheeledVehicle::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGWheeledVehicle::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
FVector AFGWheeledVehicle::GetRealActorLocation(){ return FVector(); }
FRotator AFGWheeledVehicle::GetRealActorRotation(){ return FRotator(); }
FLinearColor AFGWheeledVehicle::GetActorRepresentationColor(){ return FLinearColor(); }
EFogOfWarRevealType AFGWheeledVehicle::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGWheeledVehicle::GetActorFogOfWarRevealRadius(){ return float(); }
void AFGWheeledVehicle::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGWheeledVehicle::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
UStaticMesh* AFGWheeledVehicle::FindAttachedStaticMesh_Implementation(){ return nullptr; }
UWheeledVehicleMovementComponent* AFGWheeledVehicle::GetVehicleMovementComponent() const{ return nullptr; }
void AFGWheeledVehicle::SetMovementComponent(UWheeledVehicleMovementComponent* movementComponent){ }
bool AFGWheeledVehicle::HasFuel() const{ return bool(); }
void AFGWheeledVehicle::GetTireData(TArray< FTireData >& out_tireData){ }
UParticleSystem* AFGWheeledVehicle::GetSurfaceParticleSystem(UPhysicalMaterial* physMat){ return nullptr; }
float AFGWheeledVehicle::GetForwardSpeed(){ return float(); }
bool AFGWheeledVehicle::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
void AFGWheeledVehicle::HandleDestroyStaticMesh(AActor* actor, float forceOfCollision){ }
void AFGWheeledVehicle::HandleDestroyFoliage(){ }
bool AFGWheeledVehicle::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
bool AFGWheeledVehicle::ConsumesFuel(){ return bool(); }
float AFGWheeledVehicle::GetFuelBurnRatio(){ return float(); }
AFGDrivingTargetList* AFGWheeledVehicle::GetTargetList(bool createIfNeeded){ return nullptr; }
bool AFGWheeledVehicle::GetPathVisibility(){ return bool(); }
void AFGWheeledVehicle::Multicast_PlayFoliageDestroyedEffect_Implementation( UParticleSystem* destroyEffect,  UAkAudioEvent* destroyAudioEvent, FVector location){ }
void AFGWheeledVehicle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){ }
void AFGWheeledVehicle::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){ }
void AFGWheeledVehicle::ManageFakeForces(float DeltaTime){ }
void AFGWheeledVehicle::MeasureVelocities(float deltaTime){ }
FText AFGWheeledVehicle::GetDefaultMapName(TSubclassOf< AFGWheeledVehicle > vehicleType){ return FText(); }
AFGDrivingTargetList* AFGWheeledVehicle::GetActiveTargetList() const{ return nullptr; }
void AFGWheeledVehicle::SyncWithSimulation(){ }
void AFGWheeledVehicle::StartDockingProcess(){ }
void AFGWheeledVehicle::EndDockingProcess(){ }
bool AFGWheeledVehicle::ShouldStayAtDock() const{ return bool(); }
float AFGWheeledVehicle::GetTotalFuelEnergy() const{ return float(); }
float AFGWheeledVehicle::CalculateFuelNeed() const{ return float(); }
float AFGWheeledVehicle::GetMaxFuelEnergy() const{ return float(); }
bool AFGWheeledVehicle::HasFuelForRoundtrip() const{ return bool(); }
ETransferAnimationState AFGWheeledVehicle::GetTransferAnimationState(float animationLength, float& animationTime){ return ETransferAnimationState(); }
void AFGWheeledVehicle::Died(AActor* thisActor){ }
void AFGWheeledVehicle::SetSimulated(bool newIsSimulated){ }
void AFGWheeledVehicle::CreateInventoryItemDrops_Implementation(){ }
void AFGWheeledVehicle::SetAddedAngularVelocityPitch(float pitchToAdd){ }
void AFGWheeledVehicle::SetAddedAngularVelocityYaw(float yawToAdd){ }
void AFGWheeledVehicle::ResetAddedAngularVelocityValues(){ }
void AFGWheeledVehicle::UpdateAssistedVelocitiesState(){ }
void AFGWheeledVehicle::ServerUpdateAssistedVelocitiesState_Implementation(bool inDrifting, float inInputYaw, float inInputPitch){ }
bool AFGWheeledVehicle::ServerUpdateAssistedVelocitiesState_Validate(bool inDrifting, float inInputYaw, float inInputPitch){ return bool(); }
void AFGWheeledVehicle::UseReplicatedState(){ }
void AFGWheeledVehicle::SmoothMovementReplication(float DeltaTime){ }
void AFGWheeledVehicle::ReplicateMovementClientToServer_Implementation(FVector AuthoritativeLoc, FQuat AuthoritativeQuat, FVector AuthoritativeVelocity){ }
void AFGWheeledVehicle::OnCustomizationDataApplied(const FFactoryCustomizationData& customizationData){ }
void AFGWheeledVehicle::UpdateAirStatus(){ }
void AFGWheeledVehicle::UpdateTireEffects(){ }
void AFGWheeledVehicle::UpdateTireParticle(FTireData tireData){ }
void AFGWheeledVehicle::BurnFuel(float dt){ }
void AFGWheeledVehicle::ApplyAddedAngularVelocityModifiers(float deltaTime){ }
void AFGWheeledVehicle::SwitchParticle(int32 tireIndex, UParticleSystem* particleTemplate){ }
void AFGWheeledVehicle::DrawTireTrack(FTireData tireData, FVector decalLocation){ }
void AFGWheeledVehicle::ClampVelocities(){ }
void AFGWheeledVehicle::AddedLinearThrottleVelocity(){ }
void AFGWheeledVehicle::ApplyRollStabilisation(float deltaTime){ }
void AFGWheeledVehicle::ApplyAssistedVelocities(float deltaTime){ }
void AFGWheeledVehicle::SetRecordingStatus(ERecordingStatus recordingStatus){ }
void AFGWheeledVehicle::OnFuelAdded(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numAdded){ }
void AFGWheeledVehicle::OnRep_TransferStatusChanged(){ }
void AFGWheeledVehicle::StopVehicle(){ }
float AFGWheeledVehicle::AdjustThrottle(float throttle) const{ return float(); }
void AFGWheeledVehicle::StartRecording(){ }
void AFGWheeledVehicle::StopRecording(bool isValid){ }
void AFGWheeledVehicle::TickRecording(float deltaTime){ }
void AFGWheeledVehicle::PlaceTargetPoint(){ }
void AFGWheeledVehicle::ClearTargetList(){ }
void AFGWheeledVehicle::CacheSpeedInKMH(){ }
bool AFGWheeledVehicle::ShouldStopVehicle() const{ return bool(); }
void AFGWheeledVehicle::SetIsFollowingPath(bool isFollowingPath){ }
void AFGWheeledVehicle::StopAllMovement(){ }
float AFGWheeledVehicle::GetLocalTime() const{ return float(); }
void AFGWheeledVehicle::MoveForward(float axisValue){ }
void AFGWheeledVehicle::MoveRight(float axisValue){ }
void AFGWheeledVehicle::TurnOverVehicle(){ }
void AFGWheeledVehicle::SetIsPossessed(bool isPossessed){ }
bool AFGWheeledVehicle::CanLoadPath() const{ return bool(); }
bool AFGWheeledVehicle::CanSavePath() const{ return bool(); }
void AFGWheeledVehicle::SetCurrentTarget( AFGTargetPoint* newTarget){ }
void AFGWheeledVehicle::UpdateCurrentTarget(){ }
void AFGWheeledVehicle::PickNextTarget(){ }
void AFGWheeledVehicle::Server_Leave_Implementation(){ }
void AFGWheeledVehicle::Server_ToggleAutoPilot_Implementation(){ }
void AFGWheeledVehicle::Server_TogglePathVisibility_Implementation(){ }
void AFGWheeledVehicle::Server_ToggleRecording_Implementation(){ }
void AFGWheeledVehicle::Server_ClearRecordedPath_Implementation(){ }
void AFGWheeledVehicle::Server_SavePath_Implementation(const FString& saveName){ }
void AFGWheeledVehicle::Server_UnsavePath_Implementation(AFGSavedWheeledVehiclePath* path){ }
void AFGWheeledVehicle::Server_LoadPath_Implementation( AFGDrivingTargetList* targetList){ }
void AFGWheeledVehicle::FindSavedPaths(const FString& textFilter, bool filterOnVehicleType, TArray< AFGSavedWheeledVehiclePath* >& result) const{ }
void AFGWheeledVehicle::OnRep_IsFollowingPath(){ }
void AFGWheeledVehicle::OnRep_SimulationMovement(){ }
void AFGWheeledVehicle::OnRep_CurrentTarget(){ }
void AFGWheeledVehicle::OnRep_RecordingStatus(){ }
void AFGWheeledVehicle::OnRep_IsGhosting(){ }
void AFGWheeledVehicle::OnIsSimulatedChanged(){ }
void AFGWheeledVehicle::TryActivatePathSimulation(){ }
void AFGWheeledVehicle::AttachSimulatedVehicle(){ }
FVector AFGWheeledVehicle::GetVelocityVector() const{ return FVector(); }
void AFGWheeledVehicle::OnSimulationTargetReached(AFGTargetPoint* newTarget){ }
void AFGWheeledVehicle::PickFirstTargetAfterStation(){ }
AFGTargetPoint* AFGWheeledVehicle::SpawnNewTargetPoint(const FVector& location, const FRotator& rotation, AFGDrivingTargetList* targetList, int targetSpeed, AFGTargetPoint* afterTarget){ return nullptr; }
void AFGWheeledVehicle::OnTargetWasForceClaimed( AFGTargetPoint* target,  AFGWheeledVehicle* claimant){ }
void AFGWheeledVehicle::OnDockingTargetWasClaimed( AFGTargetPoint* target){ }
UFGVehicleCollisionBoxComponent* AFGWheeledVehicle::FindCollisionBox() const{ return nullptr; }
void AFGWheeledVehicle::StartGhosting(){ }
void AFGWheeledVehicle::TryLeaveSimulatedMode(){ }
bool AFGWheeledVehicle::IsAboveSolidGround(const FTransform& transform) const{ return bool(); }
bool AFGWheeledVehicle::IsLeaveSimulationFriendly(const FTransform& transform) const{ return bool(); }
void AFGWheeledVehicle::GiveWayTo(const AFGWheeledVehicle* other){ }
float AFGWheeledVehicle::CalculateAutomatedFuelToConsume(float deltaTime){ return float(); }
FName AFGWheeledVehicle::VehicleMovementComponentName = FName();