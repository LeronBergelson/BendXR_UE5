// XRBend_RemoteControl.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XRBend_RemoteControl.generated.h"

UENUM(BlueprintType)
enum class EWorkoutType : uint8
{
    None UMETA(DisplayName = "None"),
    Invalid UMETA(DisplayName = "Invalid"),

    // Stretches
    ShoulderStretch UMETA(DisplayName = "Shoulder Stretch"),
    KneelPositionHeadRotationLeft UMETA(DisplayName = "Kneel Position with Head Rotation (Left)"),
    KneelPositionHeadRotationRight UMETA(DisplayName = "Kneel Position with Head Rotation (Right)"),
    SeatedSideStretch UMETA(DisplayName = "Seated Side Stretch"),
    CobraStretch UMETA(DisplayName = "Cobra Stretch"),
    LungeTwistLeft UMETA(DisplayName = "Lunge Twist (Left)"),
    LungeTwistRight UMETA(DisplayName = "Lunge Twist (Right)"),
    LowLungeArmRaiseLeft UMETA(DisplayName = "Low Lunge with Arm Raise (Left)"),
    LowLungeArmRaiseRight UMETA(DisplayName = "Low Lunge with Arm Raise (Right)"),
    FigureFourStretchLeft UMETA(DisplayName = "Figure-Four Stretch (Left)"),
    FigureFourStretchRight UMETA(DisplayName = "Figure-Four Stretch (Right)"),
    HamstringStretch UMETA(DisplayName = "Hamstring Stretch"),
    ForwardFold UMETA(DisplayName = "Forward Fold"),
    SeatedSpinalTwistLeft UMETA(DisplayName = "Seated Spinal Twist (Left)"),
    SeatedSpinalTwistRight UMETA(DisplayName = "Seated Spinal Twist (Right)"),
    HipRotationLeft UMETA(DisplayName = "Hip Rotation (Left)"),
    HipRotationRight UMETA(DisplayName = "Hip Rotation (Right)"),
    JumpingJacks UMETA(DisplayName = "Jumping Jacks"),
    ArmRotations UMETA(DisplayName = "Arm Rotations"),
    ForwardFoldArmCross UMETA(DisplayName = "Forward Fold with Arm Cross"),
    StandingSideStretch UMETA(DisplayName = "Standing Side Stretch"),
    SupineHamstringStretch UMETA(DisplayName = "Supine Hamstring Stretch"),
    SideLungeStretch UMETA(DisplayName = "Side Lunge Stretch"),
    CircularArmRaiseToeTouchLeft UMETA(DisplayName = "Circular Arm Raise to Toe Touch (Left)"),
    CircularArmRaiseToeTouchRight UMETA(DisplayName = "Circular Arm Raise to Toe Touch (Right)"),
    ForwardReachLeft UMETA(DisplayName = "Forward Reach (Left)"),
    ForwardReachRight UMETA(DisplayName = "Forward Reach (Right)"),

    // Exercises
    Squats UMETA(DisplayName = "Squats"),
    SquatsWithPunch UMETA(DisplayName = "Squats with Punch"),
    Lunges UMETA(DisplayName = "Lunges"),
    SitUps UMETA(DisplayName = "Sit-Ups"),
    SitUpsHandsOnHead UMETA(DisplayName = "Sit-Ups with Hands on Head"),
    PushUps UMETA(DisplayName = "Push-Ups"),
    CloseHandPushUps UMETA(DisplayName = "Close-Hand Push-Ups"),
    OneHandPushUpLeft UMETA(DisplayName = "One-Hand Push-Ups (Left)"),
    OneHandPushUpRight UMETA(DisplayName = "One-Hand Push-Ups (Right)"),
    MountainClimbers UMETA(DisplayName = "Mountain Climbers"),
    SitUpElbowKneeRotation UMETA(DisplayName = "Sit-Up with Elbow-to-Knee Rotation"),
    SupineHipBridge UMETA(DisplayName = "Supine Hip Bridge"),
    SeatedLegPushBodyRotationLeft UMETA(DisplayName = "Seated Leg Push with Body Rotation"), // No Left/Right
    BicycleCrunches UMETA(DisplayName = "Bicycle Crunches")
};

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

    // Function to handle HTTP requests
    UFUNCTION(BlueprintCallable, Category = "Remote Control")
    EWorkoutType GetWorkoutTypeFromRequest(const FString& RequestBody);
};
