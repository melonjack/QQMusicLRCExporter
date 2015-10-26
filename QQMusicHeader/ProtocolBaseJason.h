//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ProtocolBaseJason : ProtocolBase
{
    int _returnCode;
    NSString *_returnMsg;
}

+ (id)getProperJsonUrl:(id)arg1;
@property(readonly, nonatomic) NSString *returnMsg; // @synthesize returnMsg=_returnMsg;
@property(readonly, nonatomic) int returnCode; // @synthesize returnCode=_returnCode;
- (void).cxx_destruct;
- (id)trimReceivedStr:(id)arg1;
- (BOOL)trimHeaderSpace;
- (BOOL)needsUnzip:(id)arg1;
- (BOOL)isSuccessfulReturnCode:(id)arg1;
- (id)getProcessedUrl;
- (BOOL)bParseOKUsedAsParseOKPurpose;
- (BOOL)parseCompressedData:(id)arg1;
- (id)createPostData:(id)arg1 SIDStr:(id)arg2;

@end
