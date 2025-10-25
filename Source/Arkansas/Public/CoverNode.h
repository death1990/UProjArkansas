#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CoverIdleAnim.h"
#include "CoverLineOfSightDepthBuffer.h"
#include "CoverSegmentDetails.h"
#include "ECoverActions.h"
#include "ECoverSide.h"
#include "ECoverTypes.h"
#include "EnviromentNode.h"
#include "CoverNode.generated.h"

class AActor;
class AIndianaAiCharacter;
class AIndianaAiController;
class AIndianaCharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class ARKANSAS_API ACoverNode : public AEnviromentNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GenerationVolumeGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverSegmentDetails CoverSegmentDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallThickness;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverTypes CoverType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClockWiseWallTheta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CounterClockWiseWallTheta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClockWiseFireTheta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CounterClockWiseFireTheta;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFiringArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FireAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldFiringPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverLineOfSightDepthBuffer FiringDepthBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WallAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldWallPosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CornerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftCornerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightCornerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCoverInStasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDynamicCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyed;
    
    ACoverNode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVaultPoints(AIndianaAiCharacter* Character, UAnimMontage* AnimMontage, FVector Point);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearbyCoverType(AActor* Actor, FVector Extents, ECoverTypes NewCoverType);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearbyCoverEnabled(AActor* DestroyedActor, FVector Extents, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCoverType(ECoverTypes NewCoverType);
    
    UFUNCTION(BlueprintCallable)
    void PickFilteredCoverAction(AIndianaAiCharacter* Character, bool& Success, ECoverActions& CoverAction, ECoverActions FilteredAction);
    
    UFUNCTION(BlueprintCallable)
    bool PickCoverIdle(AIndianaAiCharacter* Character, FCoverIdleAnim& OutAnim);
    
    UFUNCTION(BlueprintCallable)
    void PickCoverAction(AIndianaAiCharacter* Character, bool& Success, ECoverActions& CoverAction, ECoverActions PreferredAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidFiringVision(AIndianaCharacter* InOccupier, AIndianaCharacter* InTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidFiringAngle(const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidCoverHidden(AIndianaCharacter* InOccupier, AIndianaCharacter* InTarget, bool bDebug) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidCoverForController(AIndianaAiController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidCoverAngle(const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutflanked(const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFiringArc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCorner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWallPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWallAttachPoint(AIndianaCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWallAngle() const;
    
    UFUNCTION(BlueprintCallable)
    void GetVaultPoint(AIndianaAiCharacter* Character, bool& bHasPoint, FVector& Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlotRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScanStartPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFiringPointChar(AIndianaCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFiringPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFiringAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoverWallThetas(float& OutClockWiseWallTheta, float& NewCounterClockWiseWallTheta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoverTypes GetCoverType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoverSide GetCoverSide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCoverFireThetas(float& OutClockWiseWallTheta, float& OutCounterClockWiseWallTheta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCornerPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActionLocation(AIndianaCharacter* Character, ECoverActions Action, float Offset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FiringArcScore(FVector TargetPos) const;
    
    UFUNCTION(BlueprintCallable)
    void FireScanYaw();
    
    UFUNCTION(BlueprintCallable)
    void FireScanDepthBuffer();
    
    UFUNCTION(BlueprintCallable)
    static void EnableNearbyCover(AActor* DestroyedActor, FVector Extents);
    
    UFUNCTION(BlueprintCallable)
    void EnableCover();
    
    UFUNCTION(BlueprintCallable)
    static void DisableNearbyCover(AActor* DestroyedActor, FVector Extents);
    
    UFUNCTION(BlueprintCallable)
    void DisableCover();
    
    UFUNCTION(BlueprintCallable)
    static void DebugCoverOwnership(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFireVolume(FVector TargetPos, bool DefaultValue) const;
    
};

