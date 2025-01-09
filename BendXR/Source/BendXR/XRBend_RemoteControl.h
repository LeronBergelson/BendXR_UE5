#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XRBend_RemoteControl.generated.h"

UCLASS()
class BENDXR_API AXRBend_RemoteControl : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AXRBend_RemoteControl();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function exposed to Blueprints and potentially Remote Control
	UFUNCTION(BlueprintCallable, Category = "Remote Control")
	void TestFunctionFromCPP();
};
