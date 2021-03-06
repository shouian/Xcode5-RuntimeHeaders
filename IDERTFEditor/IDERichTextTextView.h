/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextView.h"

@class DVTTextDocumentLocation, NSArray;

@interface IDERichTextTextView : NSTextView
{
    NSArray *_foundLocations;
    DVTTextDocumentLocation *_currentFoundLocation;
}

@property(copy) DVTTextDocumentLocation *currentFoundLocation; // @synthesize currentFoundLocation=_currentFoundLocation;
@property(copy, nonatomic) NSArray *foundLocations; // @synthesize foundLocations=_foundLocations;
- (void).cxx_destruct;
- (void)drawFoundLocationsInRange:(struct _NSRange)arg1;

@end

