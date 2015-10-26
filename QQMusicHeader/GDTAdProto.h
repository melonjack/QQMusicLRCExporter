//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTAdProtoDelegate.h"

@class GDTLiteStatsMgr, NSString;

__attribute__((visibility("hidden")))
@interface GDTAdProto : NSObject <GDTAdProtoDelegate>
{
    GDTLiteStatsMgr *statsMgr;
}

- (void).cxx_destruct;
- (id)getSpamDicFromClickInfo:(id)arg1;
- (id)encodeCloseRequest:(id)arg1 clickInfo:(id)arg2;
- (id)encodeLinkClickUrl:(id)arg1 clickInfo:(id)arg2;
- (id)encodeExposureRequest:(id)arg1 exposureInfo:(id)arg2;
- (id)decodeLoadAdResponse:(id)arg1 posId:(id)arg2;
- (id)encodeLoadAdRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
