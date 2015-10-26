//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSURLResponse, TencentRequest;

@protocol TencentRequestDelegate <NSObject>

@optional
- (void)request:(TencentRequest *)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)request:(TencentRequest *)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)request:(TencentRequest *)arg1 didLoadRawResponse:(NSData *)arg2;
- (void)request:(TencentRequest *)arg1 didLoad:(id)arg2 dat:(NSData *)arg3;
- (void)request:(TencentRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(TencentRequest *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)requestLoading:(TencentRequest *)arg1;
@end
