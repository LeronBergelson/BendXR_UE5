#include "XRBend_RemoteControl.h"
#include "Engine/Engine.h"

// Sets default values
AXRBend_RemoteControl::AXRBend_RemoteControl()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AXRBend_RemoteControl::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AXRBend_RemoteControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Test function
void AXRBend_RemoteControl::TestFunctionFromCPP()
{
	// Print to screen
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Remote control works"));
	}

	// Print to output log
	UE_LOG(LogTemp, Log, TEXT("Remote control works"));
}
