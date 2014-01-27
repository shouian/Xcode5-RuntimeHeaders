/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "NSMenuDelegate-Protocol.h"

@class DVTButtonTextField, DVTObservingToken, IBDocument, IBLayoutConstraint, NSMenu, NSNumberFormatter;

@interface IBAutolayoutConstraintConstantEditingViewController : IDEViewController <NSMenuDelegate>
{
    DVTObservingToken *_constantObservingToken;
    DVTObservingToken *_priorityObservingToken;
    NSMenu *_constantMenu;
    NSMenu *_priorityMenu;
    IBLayoutConstraint *_constraint;
    IBDocument *_document;
    DVTButtonTextField *_priorityTextField;
    DVTButtonTextField *_constantTextField;
    NSNumberFormatter *_constantFormatter;
}

@property(retain) NSNumberFormatter *constantFormatter; // @synthesize constantFormatter=_constantFormatter;
@property(retain) DVTButtonTextField *constantTextField; // @synthesize constantTextField=_constantTextField;
@property(retain) DVTButtonTextField *priorityTextField; // @synthesize priorityTextField=_priorityTextField;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) IBLayoutConstraint *constraint; // @synthesize constraint=_constraint;
- (void).cxx_destruct;
- (void)userDidChangePriority:(id)arg1;
- (void)userDidChangeConstant:(id)arg1;
- (void)didSelectPriorityItem:(id)arg1;
- (void)didSelectUseCurrentCanvasValue:(id)arg1;
- (void)didSelectUseStandardValue:(id)arg1;
- (void)_openPriorityMenu:(id)arg1;
- (void)_openConstantMenu:(id)arg1;
- (void)_openMenu:(id)arg1 underControl:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_syncPriorityUIFromModel;
- (void)_syncPriorityModelFromUI;
- (void)_syncConstantUIFromModel;
- (void)_syncConstantModelFromUI;
- (void)loadView;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_makePrioritySuggestionMenuItems;
- (void)_populateClippingPreventionSuggestionMenuItems:(id)arg1 status:(id)arg2;
- (void)_populatePriorityMenu:(id)arg1;
- (void)_populateConstantMenu:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithConstraint:(id)arg1 document:(id)arg2;

@end
