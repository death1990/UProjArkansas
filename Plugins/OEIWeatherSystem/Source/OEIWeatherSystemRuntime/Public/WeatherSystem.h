#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EWeatherSystemEditorTickOptions.h"
#include "MaterialParameterCurveColor.h"
#include "MaterialParameterCurveScalar.h"
#include "SkyLightSettings.h"
#include "WeatherSystemBloomSettings.h"
#include "WeatherSystemColorGradingSettings.h"
#include "WeatherSystemExposureSettings.h"
#include "WeatherSystemFogInscatteringSettings.h"
#include "WeatherSystemSkyAtmosphereSettings.h"
#include "WeatherSystemSkyDomeSettings.h"
#include "WeatherSystemTwilightSettings.h"
#include "WeatherSystem.generated.h"

class ACelestialBody;
class AExponentialHeightFog;
class ASkyAtmosphere;
class ASkyLight;
class ATimeOfDayActor;
class AVolumetricCloud;
class AWeatherSystem;
class AWindDirectionalSource;
class UCurveFloat;
class UCurveLinearColor;
class UExponentialHeightFogComponent;
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
class UObject;
class UPostProcessComponent;
class USkyAtmosphereComponent;
class USkyLightComponent;
class UVolumetricCloudComponent;
class UWeatherStateBase;

UCLASS(Abstract, Blueprintable)
class OEIWEATHERSYSTEMRUNTIME_API AWeatherSystem : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACelestialBody*> m_CelestialBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeatherStateBase* m_DefaultWeatherState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyLight* m_SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyLightSettings m_SkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EclipseSkyLightBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* m_ExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* m_PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSystemColorGradingSettings m_ColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSystemExposureSettings m_ExposureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSystemBloomSettings m_BloomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolumetricCloud* m_VolumetricCloudActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_CloudMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollection* m_NiagaraParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyAtmosphere* m_SkyAtmosphereActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSystemSkyAtmosphereSettings m_SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWindDirectionalSource* m_Wind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WindParamterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TimeOfDayParamterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SunAngleParamterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParameterCurveScalar> m_CurveBasedMaterialSettingsScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParameterCurveColor> m_CurveBasedMaterialSettingsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TwilightPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSystemTwilightSettings m_TwilightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_TwilightLowerHemisphereColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AboveHorizonTwilightAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BelowHorizonTwilightAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSystemFogInscatteringSettings m_FogInscatteringSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSystemSkyDomeSettings m_SkyDomeSettings;
    
public:
    AWeatherSystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterTimeOfDayActor(ATimeOfDayActor* InTimeOfDayActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWeatherState(const UWeatherStateBase* pWeatherState, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTimeOfDayActor(ATimeOfDayActor* InTimeOfDayActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AWeatherSystem* GetWeatherSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVolumetricCloudComponent* GetVolumetricCloudComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTwilightPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkyLightComponent* GetSkylightComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UCurveFloat* GetSkyDomeIntensityCurve();
    
    UFUNCTION(BlueprintCallable)
    UCurveLinearColor* GetSkyDomeHorizonCurve();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkyAtmosphereComponent* GetSkyAtmosphereComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPreviousEvaluatedExposureSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialParameterCollection* GetMaterialParameterCollection() const;
    
    UFUNCTION(BlueprintCallable)
    UCurveLinearColor* GetFogInscatteringTintCurve();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UExponentialHeightFogComponent* GetExponentialHeightFogComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialParameterCollection* GetCloudMaterialParameterCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACelestialBody*> GetCelestialBodies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveSunAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACelestialBody*> GetActiveCelestialBodiesSorted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACelestialBody*> GetActiveCelestialBodies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialParameterCollection* GeMaterialParameterCollection() const;
    
    UFUNCTION(BlueprintCallable)
    void EditorOnly_SetSequenceRenderTimeNormalized(int32 InDay, float InNormalizedTime);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnly_SetSequenceRenderTime(int32 InDay, float InHours, float InMinutes);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnly_SetEditorTickOption(TEnumAsByte<EWeatherSystemEditorTickOptions> eTickOption);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWeatherState(const UWeatherStateBase* pWeatherState, float FadeInTime);
    
};

