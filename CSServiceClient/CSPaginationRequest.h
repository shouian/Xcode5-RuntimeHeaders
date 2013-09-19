/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CSServiceRequest, NSNumber, NSString;

@interface CSPaginationRequest : NSObject
{
    CSServiceRequest *serviceRequest;
    NSString *guid;
    NSNumber *startIndex;
    NSNumber *resultsLimit;
}

+ (void)initialize;
@property(retain) NSNumber *resultsLimit; // @synthesize resultsLimit;
@property(retain) NSNumber *startIndex; // @synthesize startIndex;
@property(retain) NSString *guid; // @synthesize guid;
@property(retain) CSServiceRequest *serviceRequest; // @synthesize serviceRequest;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
