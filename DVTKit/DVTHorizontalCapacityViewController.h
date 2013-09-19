/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTCapacityViewController.h>

@class NSString, NSTextField, NSView;

@interface DVTHorizontalCapacityViewController : DVTCapacityViewController
{
    NSString *_leftLabelString;
    NSString *_rightLabelString;
    NSTextField *_leftLabel;
    NSTextField *_rightLabel;
    NSView *_segmentsLabelView;
}

@property __weak NSView *segmentsLabelView; // @synthesize segmentsLabelView=_segmentsLabelView;
@property __weak NSTextField *rightLabel; // @synthesize rightLabel=_rightLabel;
@property __weak NSTextField *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(copy) NSString *rightLabelString; // @synthesize rightLabelString=_rightLabelString;
@property(copy) NSString *leftLabelString; // @synthesize leftLabelString=_leftLabelString;
- (void).cxx_destruct;
- (void)_recreateAndAddLabelsForSegments;
- (void)setSegments:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
