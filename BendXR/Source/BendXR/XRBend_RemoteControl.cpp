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

// Function to map request body to enum
EWorkoutType AXRBend_RemoteControl::GetWorkoutTypeFromRequest(const FString& RequestBody)
{
    if (RequestBody.Equals("None", ESearchCase::IgnoreCase)) return EWorkoutType::None;
    if (RequestBody.Equals("Shoulder Stretch", ESearchCase::IgnoreCase)) return EWorkoutType::ShoulderStretch;
    if (RequestBody.Equals("Kneel Position with Head Rotation (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::KneelPositionHeadRotationLeft;
    if (RequestBody.Equals("Kneel Position with Head Rotation (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::KneelPositionHeadRotationRight;
    if (RequestBody.Equals("Seated Side Stretch", ESearchCase::IgnoreCase)) return EWorkoutType::SeatedSideStretch;
    if (RequestBody.Equals("Cobra Stretch", ESearchCase::IgnoreCase)) return EWorkoutType::CobraStretch;
    if (RequestBody.Equals("Lunge Twist (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::LungeTwistLeft;
    if (RequestBody.Equals("Lunge Twist (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::LungeTwistRight;
    if (RequestBody.Equals("Low Lunge with Arm Raise (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::LowLungeArmRaiseLeft;
    if (RequestBody.Equals("Low Lunge with Arm Raise (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::LowLungeArmRaiseRight;
    if (RequestBody.Equals("Figure-Four Stretch (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::FigureFourStretchLeft;
    if (RequestBody.Equals("Figure-Four Stretch (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::FigureFourStretchRight;
    if (RequestBody.Equals("Hamstring Stretch", ESearchCase::IgnoreCase)) return EWorkoutType::HamstringStretch;
    if (RequestBody.Equals("Forward Fold", ESearchCase::IgnoreCase)) return EWorkoutType::ForwardFold;
    if (RequestBody.Equals("Seated Spinal Twist (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::SeatedSpinalTwistLeft;
    if (RequestBody.Equals("Seated Spinal Twist (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::SeatedSpinalTwistRight;
    if (RequestBody.Equals("Hip Rotation (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::HipRotationLeft;
    if (RequestBody.Equals("Hip Rotation (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::HipRotationRight;
    if (RequestBody.Equals("Jumping Jacks", ESearchCase::IgnoreCase)) return EWorkoutType::JumpingJacks;
    if (RequestBody.Equals("Arm Rotations", ESearchCase::IgnoreCase)) return EWorkoutType::ArmRotations;
    if (RequestBody.Equals("Forward Fold with Arm Cross", ESearchCase::IgnoreCase)) return EWorkoutType::ForwardFoldArmCross;
    if (RequestBody.Equals("Standing Side Stretch", ESearchCase::IgnoreCase)) return EWorkoutType::StandingSideStretch;
    if (RequestBody.Equals("Supine Hamstring Stretch", ESearchCase::IgnoreCase)) return EWorkoutType::SupineHamstringStretch;
    if (RequestBody.Equals("Side Lunge Stretch", ESearchCase::IgnoreCase)) return EWorkoutType::SideLungeStretch;
    if (RequestBody.Equals("Circular Arm Raise to Toe Touch (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::CircularArmRaiseToeTouchLeft;
    if (RequestBody.Equals("Circular Arm Raise to Toe Touch (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::CircularArmRaiseToeTouchRight;
    if (RequestBody.Equals("Forward Reach (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::ForwardReachLeft;
    if (RequestBody.Equals("Forward Reach (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::ForwardReachRight;

    // Exercises
    if (RequestBody.Equals("Squats", ESearchCase::IgnoreCase)) return EWorkoutType::Squats;
    if (RequestBody.Equals("Squats with Punch", ESearchCase::IgnoreCase)) return EWorkoutType::SquatsWithPunch;
    if (RequestBody.Equals("Lunges", ESearchCase::IgnoreCase)) return EWorkoutType::Lunges;
    if (RequestBody.Equals("Sit-Ups", ESearchCase::IgnoreCase)) return EWorkoutType::SitUps;
    if (RequestBody.Equals("Sit-Ups with Hands on Head", ESearchCase::IgnoreCase)) return EWorkoutType::SitUpsHandsOnHead;
    if (RequestBody.Equals("Push-Ups", ESearchCase::IgnoreCase)) return EWorkoutType::PushUps;
    if (RequestBody.Equals("Close-Hand Push-Ups", ESearchCase::IgnoreCase)) return EWorkoutType::CloseHandPushUps;
    if (RequestBody.Equals("One-Hand Push-Ups (Left)", ESearchCase::IgnoreCase)) return EWorkoutType::OneHandPushUpLeft;
    if (RequestBody.Equals("One-Hand Push-Ups (Right)", ESearchCase::IgnoreCase)) return EWorkoutType::OneHandPushUpRight;
    if (RequestBody.Equals("Mountain Climbers", ESearchCase::IgnoreCase)) return EWorkoutType::MountainClimbers;
    if (RequestBody.Equals("Sit-Up with Elbow-to-Knee Rotation", ESearchCase::IgnoreCase)) return EWorkoutType::SitUpElbowKneeRotation;
    if (RequestBody.Equals("Supine Hip Bridge", ESearchCase::IgnoreCase)) return EWorkoutType::SupineHipBridge;
    if (RequestBody.Equals("Seated Leg Push with Body Rotation", ESearchCase::IgnoreCase)) return EWorkoutType::SeatedLegPushBodyRotationLeft;
    if (RequestBody.Equals("Bicycle Crunches", ESearchCase::IgnoreCase)) return EWorkoutType::BicycleCrunches;

    // If no match, return Invalid
    return EWorkoutType::Invalid;
}
