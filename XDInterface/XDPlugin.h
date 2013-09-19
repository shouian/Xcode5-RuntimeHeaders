/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBundle;

@interface XDPlugin : NSObject
{
    NSBundle *_pluginBundle;
}

+ (void)initialize:(id)arg1;
- (id)_callBack;
- (id)frontmostPluginController;
- (id)bundle;
- (id)mainMenuItem;
- (BOOL)isValidGroupsAndFilesSelection:(id)arg1;
- (id)customMainMenuItems;
- (void)newModel:(id)arg1;
- (id)newController;
- (id)createController;
- (id)modelTypeId;
- (id)modelTypeDisplayNamePlural;
- (id)modelTypeDisplayName;
- (BOOL)saveModelIDFileAtModelPath:(id)arg1;
- (BOOL)canLoadModelAtPath:(id)arg1;
- (void)start;
- (id)init;

@end
