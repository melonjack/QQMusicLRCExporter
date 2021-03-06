//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SimplePingDelegate.h"

@class NSDate, NSString, SimplePing;

__attribute__((visibility("hidden")))
@interface SimplePingHelper : NSObject <SimplePingDelegate>
{
    BOOL _result;
    SimplePing *simplePing;
    id target;
    SEL sel;
    NSString *_server;
    NSDate *_start;
    NSDate *_end;
}

+ (void)ping:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
@property(nonatomic) BOOL result; // @synthesize result=_result;
@property(retain, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(nonatomic) SEL sel; // @synthesize sel;
@property(retain, nonatomic) id target; // @synthesize target;
@property(retain, nonatomic) SimplePing *simplePing; // @synthesize simplePing;
- (void).cxx_destruct;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 error:(id)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)endTime;
- (void)failPing:(id)arg1;
- (void)successPing;
- (void)killPing;
- (id)getIPAdress;
- (void)go;
- (id)initWithAddress:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

