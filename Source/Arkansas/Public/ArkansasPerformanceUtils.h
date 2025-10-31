/**
 * Arkansas Project Performance Optimization Guide
 * 
 * This file contains performance optimization guidelines and console commands
 * for The Outer Worlds 2 modding framework built on Unreal Engine 5.4.4-TOW2.
 * 
 * IMPORTANT: This is a documentation header - include in C++ files as needed.
 */

#pragma once

/*
 * ========== ARKANSAS PERFORMANCE OPTIMIZATION GUIDE ==========
 * 
 * Console Commands for Runtime Performance Tuning:
 * 
 * RENDERING:
 * - r.SetRes 1920x1080        // Set resolution
 * - r.VSync 0                 // Disable VSync for better FPS
 * - r.ScreenPercentage 90     // Reduce render scale
 * - r.TemporalAACurrentFrameWeight 0.04  // Optimize TAA
 * - r.PostProcessAAQuality 4  // Set AA quality
 * 
 * MEMORY:
 * - r.Streaming.PoolSize 3000 // Set texture streaming pool
 * - r.Streaming.Boost 1       // Enable texture streaming boost
 * - gc.MaxObjectsNotConsideredByGC 1     // GC optimization
 * 
 * PHYSICS:
 * - p.DefaultMaxDepenetrationVelocity 1000
 * - p.MaxAngularVelocity 3600
 * 
 * ANIMATION:
 * - a.ParallelAnimUpdate 1
 * - a.ParallelAnimEvaluation 1
 * - a.URO.ForceAnimRate 1
 * 
 * LOD SYSTEM:
 * - r.ForceLOD 1             // Force specific LOD level
 * - r.StaticMeshLODDistanceScale 0.5  // Reduce LOD distances
 * 
 * AUDIO (Wwise Integration):
 * - au.MaxChannels 32
 * - au.IsAudioMixerEnabled 1
 * 
 * ========== BLUEPRINT OPTIMIZATION TIPS ==========
 * 
 * 1. Use Event-Driven Design:
 *    - Prefer Event Dispatchers over Tick events
 *    - Use Timers instead of constant Tick checks
 * 
 * 2. Optimize References:
 *    - Cache component references in BeginPlay
 *    - Avoid GetComponentByClass calls in Tick
 * 
 * 3. Memory Management:
 *    - Use Object Pools for frequently spawned actors
 *    - Implement proper cleanup in EndPlay
 * 
 * 4. LOD Integration:
 *    - Use Arkansas character LOD system
 *    - Implement distance-based complexity reduction
 * 
 * ========== C++ OPTIMIZATION PATTERNS ==========
 * 
 * Performance Macros (use in C++ implementations):
 * 
 * #define ARKANSAS_PROFILE_SCOPE(Name) \
 *     SCOPE_CYCLE_COUNTER(STAT_##Name)
 * 
 * #define ARKANSAS_QUICK_SCOPE_CYCLE_COUNTER(Name) \
 *     QUICK_SCOPE_CYCLE_COUNTER(STAT_##Name)
 * 
 * Memory Optimization Example:
 * 
 * void OptimizeForArkansas()
 * {
 *     // Force garbage collection
 *     if (GEngine)
 *     {
 *         GEngine->ForceGarbageCollection(true);
 *     }
 * 
 *     // Optimize texture streaming
 *     if (IConsoleManager::Get().FindConsoleVariable(TEXT("r.Streaming.PoolSize")))
 *     {
 *         IConsoleManager::Get().FindConsoleVariable(TEXT("r.Streaming.PoolSize"))->Set(3000);
 *     }
 * }
 * 
 * ========== OEI PLUGIN OPTIMIZATION ==========
 * 
 * The Arkansas project uses 30+ custom OEI plugins. Key optimizations:
 * 
 * 1. OEICommon (PreDefault loading):
 *    - Core tech foundation loaded first
 *    - Minimize dependencies on this module
 * 
 * 2. OEITickManager:
 *    - Use custom tick groups for performance
 *    - Batch similar operations
 * 
 * 3. OEIWwise Audio:
 *    - Stream audio assets efficiently
 *    - Use audio occlusion for performance
 * 
 * 4. OEIFlowCharts (Conversations):
 *    - Cache conversation data
 *    - Minimize dynamic node creation
 * 
 * ========== BUILD OPTIMIZATION ==========
 * 
 * The project is now configured with:
 * - Unity builds for faster compilation
 * - Shared PCHs for reduced memory usage
 * - Platform-specific optimizations
 * - Optimized module dependencies
 * 
 * Use Build_Optimized.bat for automated optimized builds.
 */