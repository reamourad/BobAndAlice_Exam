#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
    FSubsystemCollectionBase &Collection) {
  Super::Initialize(Collection);
	UBobAndAliceGameSubsystem::timeRemaining = 45.0f;
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void
UBobAndAliceGameSubsystem::SetData (float currentTimeRemaining,
                                    bool currentIsDelivered,
                                    bool currentIsCollected)
{
  UBobAndAliceGameSubsystem::timeRemaining = currentTimeRemaining;
  UBobAndAliceGameSubsystem::isDelivered = currentIsDelivered;
  UBobAndAliceGameSubsystem::isCollected = currentIsCollected;

}