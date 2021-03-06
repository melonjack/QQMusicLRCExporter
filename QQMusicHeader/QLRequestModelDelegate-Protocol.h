//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, QLRequestModel;

@protocol QLRequestModelDelegate <NSObject>

@optional
- (void)requestModelsDidStartLoad:(NSArray *)arg1;
- (void)requestModelDidCancelLoad:(QLRequestModel *)arg1;
- (void)requestModel:(QLRequestModel *)arg1 didFailedLoadWithError:(NSError *)arg2;
- (void)requestModelDidFinishLoad:(QLRequestModel *)arg1;
- (void)requestModelDidStartLoad:(QLRequestModel *)arg1;
@end

