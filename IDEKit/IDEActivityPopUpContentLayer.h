/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class IDEActivityPopUpReportLayer, NSArray, NSMutableArray, NSString;

@interface IDEActivityPopUpContentLayer : CALayer
{
    id <IDEActivityPopUpContentLayerDelegate> _delegate;
    NSMutableArray *_orderedReportLayers;
    NSMutableArray *_lineLayers;
    NSMutableArray *_orderedVisibleReportLayers;
    BOOL _issuesAreVisible;
    BOOL _botStatusIsVisible;
    NSArray *_issueCategories;
    NSString *_issuesContainerTypeString;
    NSArray *_botStatusCategories;
    IDEActivityPopUpReportLayer *_layerToHide;
    double _spaceNeededForMultiActionIndicator;
}

@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(retain, nonatomic) IDEActivityPopUpReportLayer *layerToHide; // @synthesize layerToHide=_layerToHide;
@property BOOL botStatusIsVisible; // @synthesize botStatusIsVisible=_botStatusIsVisible;
@property(copy) NSArray *botStatusCategories; // @synthesize botStatusCategories=_botStatusCategories;
@property(copy) NSString *issuesContainerTypeString; // @synthesize issuesContainerTypeString=_issuesContainerTypeString;
@property(copy) NSArray *issueCategories; // @synthesize issueCategories=_issueCategories;
@property BOOL issuesAreVisible; // @synthesize issuesAreVisible=_issuesAreVisible;
@property id <IDEActivityPopUpContentLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)orderedVisibleReportLayers;
- (void)addActivityReportLayer:(id)arg1;
- (void)insertActivityReportLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addStandardLineLayer;
- (void)removeActivityReportLayer:(id)arg1;
- (void)preferredHeightDidChange;
@property(readonly) double preferredHeight;
- (id)init;

@end

