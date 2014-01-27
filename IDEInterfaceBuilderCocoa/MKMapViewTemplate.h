/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "IBDocumentArchiving-Protocol.h"

@interface MKMapViewTemplate : NSView <IBDocumentArchiving>
{
    BOOL _zoomEnabled;
    BOOL _scrollEnabled;
    BOOL _rotateEnabled;
    BOOL _pitchEnabled;
    BOOL _showsUserLocation;
    BOOL _encodeAsRuntimeInstance;
    unsigned long long _mapType;
}

+ (id)keyPathsForValuesAffectingIbTypeNameForDefaultLabel;
@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(nonatomic) BOOL showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
@property(nonatomic, getter=isPitchEnabled) BOOL pitchEnabled; // @synthesize pitchEnabled=_pitchEnabled;
@property(nonatomic, getter=isRotateEnabled) BOOL rotateEnabled; // @synthesize rotateEnabled=_rotateEnabled;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (void)ibFinishArchivingDocument:(id)arg1 withContext:(id)arg2;
- (void)ibBeginArchivingDocument:(id)arg1 withContext:(id)arg2;
- (Class)classForCoder;
- (id)ibRuntimeClassName;
- (void)drawRect:(struct CGRect)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

@end
