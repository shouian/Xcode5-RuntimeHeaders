/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCOrganizerNodeInfo.h>

@class XCArchivedApplication, XCArchivedApplicationViewController;

@interface XCOrganizerArchivedApplicationNodeInfo : XCOrganizerNodeInfo
{
    XCArchivedApplication *application;
    XCArchivedApplicationViewController *viewController;
}

+ (id)keyPathsForValuesAffectingStatusImage;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingName;
+ (id)nodeInfoWithApplication:(id)arg1;
@property(retain) XCArchivedApplication *application; // @synthesize application;
- (void)selectBuild:(id)arg1;
- (id)viewController;
- (id)statusImage;
- (id)iconImage;
- (id)name;

@end
