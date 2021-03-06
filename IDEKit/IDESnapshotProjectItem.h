/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, NSDate, NSString;

@interface IDESnapshotProjectItem : NSObject
{
    DVTFilePath *_projectLocation;
    int _projectStatus;
    NSDate *_lastOpenedDate;
    NSString *_projectTypeString;
    NSString *_statusString;
    BOOL _isCurrentlyOpen;
    DVTFilePath *_workspaceArenaLocation;
    DVTFilePath *_snapshotsLocation;
}

+ (id)keyPathsForValueAffectingDetailedStatusString;
@property(nonatomic) BOOL isCurrentlyOpen; // @synthesize isCurrentlyOpen=_isCurrentlyOpen;
@property(retain) DVTFilePath *snapshotsLocation; // @synthesize snapshotsLocation=_snapshotsLocation;
@property(retain) DVTFilePath *workspaceArenaLocation; // @synthesize workspaceArenaLocation=_workspaceArenaLocation;
@property(readonly) int projectStatus; // @synthesize projectStatus=_projectStatus;
@property(retain, nonatomic) DVTFilePath *projectLocation; // @synthesize projectLocation=_projectLocation;
- (void).cxx_destruct;
- (id)detailedStatusString;
- (id)navigableItem_image;
- (id)navigableItem_name;
@property(readonly) NSString *projectTypeString; // @synthesize projectTypeString=_projectTypeString;
- (id)statusString;
@property(readonly) NSDate *lastOpenedDate;
- (void)_updateStatus;
- (id)description;
- (void)assignPropertiesFromAnotherProjectItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

