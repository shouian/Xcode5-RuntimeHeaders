/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXCompilerSpecificationGcc.h>

@interface PBXCompilerSpecificationGcc2_95_2 : PBXCompilerSpecificationGcc
{
}

- (unsigned long long)concurrentExecutionCountInTargetBuildContext:(id)arg1;
- (id)compileSourceCodeFileAtPath:(id)arg1 ofType:(id)arg2 toOutputDirectory:(id)arg3 inTargetBuildContext:(id)arg4;
- (id)symbolizeHeaderFileAtPath:(id)arg1 forSourceFileOfType:(id)arg2 withExtraFlags:(id)arg3 toSymbolSeparationRepositoryPath:(id)arg4 inTargetBuildContext:(id)arg5;
- (id)precompileHeaderFileAtPath:(id)arg1 forSourceFileOfType:(id)arg2 withExtraFlags:(id)arg3 toPrecompPath:(id)arg4 inTargetBuildContext:(id)arg5;
- (id)hashStringForCommandLineComponents:(id)arg1 inputFilePaths:(id)arg2 inTargetBuildContext:(id)arg3;
- (id)subprocessCommandLineForPreprocessingBehaviorWithCommand:(id)arg1 commandLine:(id)arg2;
- (id)dwarfRepositoryNameForPCHPath:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)symrepFileNameForHeaderPath:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)removeFlagsThatDoNotAffectPrecompValidityFromMutableArray:(id)arg1;
- (id)flagsForIncludingPrecompiledPrefixHeaderAtPath:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)precompFileNameForHeaderPath:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)precompFileExtension;
- (id)otherFlagsInTargetBuildContext:(id)arg1;
- (id)standardFlagsInTargetBuildContext:(id)arg1;
- (id)additionalEnvironmentEntriesInTargetBuildContext:(id)arg1;
- (id)perCompilerStandardBuildFlagsInTargetBuildContext:(id)arg1;
- (id)distributedBuildFlagsInTargetBuildContext:(id)arg1;
- (id)optionalSDKPackageFlagsInBuildContext:(id)arg1;
- (id)optionalHeaderSearchPathsInBuildContext:(id)arg1;
- (id)optionalFrameworkSearchPathsInBuildContext:(id)arg1;
- (id)perSpecificationFlagsInTargetBuildContext:(id)arg1;

@end
