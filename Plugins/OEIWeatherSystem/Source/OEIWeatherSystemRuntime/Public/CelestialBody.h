#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CelestialLightSettings.h"
#include "CelestialBody.generated.h"

class UCurveFloat;
class UDirectionalLightComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OEIWEATHERSYSTEMRUNTIME_API ACelestialBody : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AzimuthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AltitudeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AzimuthStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AltitudeStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxCelestialLightAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PolarAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UpdateRotation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_DaysInCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* m_LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCelestialLightSettings m_CelestialLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_LowerHemisphereColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LowerHemisphereBrightnessFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxLightBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightIntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AffectsTwilight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AffectedByTwilight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseMoonPhaseForLightIntensity;
    
public:
    ACelestialBody(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateStaticState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLightAngleClamped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnwoundAzimuthAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetStaticMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaleInView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadialDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLightBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetLowerHemisphereColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowerHemisphereBrightnessFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLightIntensityPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLightIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLightIndirectIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLightDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDirectionalLightComponent* GetLightComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetLightColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysInCycle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCelestialDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAzimuth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAtmosphereSunLightIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitude() const;
    
};

