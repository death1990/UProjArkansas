#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DevelopmentFunctionality.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDevelopmentFunctionality : public UObject {
    GENERATED_BODY()
public:
    UDevelopmentFunctionality();

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void Verify();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerMemoryTrim(bool bTrimThreadCaches);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerLowLevelAllocatorMemoryTrim();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWorldRendering();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTempVO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestHardwareBreakpoints();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestAddressSanitizer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Task();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartInfoTracking(float TrackRate, bool bTrackStats);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllActorsComponentsCollisionEnabled(const FString& ActorClassToModify, bool bCollisionEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllActorsCollisionEnabled(const FString& ActorClassToModify, bool bCollisionEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogFatal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSkinnedMeshAnimTickMode(int32 Mode);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ForceReevaluateStasisAll();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void FlushTelemetry();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FlushLevelStreaming();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FlushAsyncLoading();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Ensure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndInfoTracking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpWwiseMediaMemory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpWorldScriptActorsInMemory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpObjectReferencesAdjacencyList(const FString& ObjectName, bool bReferencesFrom, bool bReferencesTo, bool bDontAnalyzeThruLevelRefs);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCharactersInMemory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAPUUsage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllCharacters();
    
    UFUNCTION(Exec)
    void DelayedExecute(const FString& Command, double DelayTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawLightmapNamesSummary(float Duration, int32 LightmapTextureIndex, float VolumeThreshold);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawLightmapNamesPerComponent(float Duration, int32 LightmapTextureIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawLightmapInfo(const FString& LightmapName, float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Crash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Check();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CharacterMemReport(bool bIncludePlayer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildGCObjectReferencesAdjacencyList(const FString& ObjectName, bool bReferencesFrom, bool bReferencesTo, bool bDontAnalyzeThruLevelRefs);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildGCObjectOnlyAdjacencyList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildGCObjectAndClusteredAdjacencyList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildGCClusterOnlyAdjacencyList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildGCClusteredOnlyAdjacencyList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Bug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AuditSkinnedMeshes(bool bIncludeDefaultObjects);
    
};

