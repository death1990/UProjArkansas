#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
#include <MovieSceneObjectBindingID.h>
#include "ECameraAngle.h"
#include "ECameraPosition.h"
#include "ECameraPositonOffset.h"
#include "ECameraShot.h"
#include "EMarkType.h"
#include "OEICinematicsBPLibrary.generated.h"

class AStageCameraActor;
class UMovieScene;
class UMovieSceneSection;

UCLASS(Blueprintable, Transient)
class OEICINEMATICS_API UOEICinematicsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEICinematicsBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetMovieSceneSectionBlendMode(UMovieSceneSection* Section, EMovieSceneBlendType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetBindingName(UMovieScene* MovieScene, FGuid BindingID, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetBindingLabel(UMovieScene* MovieScene, FGuid BindingID, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringForCameraShot(ECameraShot Shot);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringForCameraPositionOffset(ECameraPositonOffset PositionOffset);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringForCameraPosition(ECameraPosition position);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringForCameraAngle(ECameraAngle CameraAngle);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSequencesFolder();
    
    UFUNCTION(BlueprintCallable)
    static FGuid GetPlayerSpeakerGuid();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetPackages();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDefaultStagePath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDefaultFullBodyAnimationSlot();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetCameraListFromSequence(UMovieScene* MovieScene);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetBindingIdByGuid(UMovieScene* MovieScene, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    static AStageCameraActor* FindCinematicCamera(const FString& CameraString, const TArray<AStageCameraActor*>& Cameras, const TMap<FString, EMarkType>& SpeakerToMark);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesMapExist(const FString& MapPath);
    
    UFUNCTION(BlueprintCallable)
    static FString CreateCameraBindingName(FGuid SpeakerID, ECameraShot CameraShot, ECameraPosition CameraPosition, ECameraPositonOffset CameraPositonOffset, ECameraAngle CameraAngle);
    
    UFUNCTION(BlueprintCallable)
    static void AddMergedSequenceMark(UMovieScene* MovieScene, int32 NodeID, float TimeSeconds);
    
};

