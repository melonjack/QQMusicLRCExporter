//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class ASIHTTPRequest, NSDate, NSString, NSTimer, SingleHourglass;

__attribute__((visibility("hidden")))
@interface PersistentConnection : NSObject <NSURLConnectionDataDelegate>
{
    ASIHTTPRequest *pURLConnection;
    int status;
    float tryTime;
    NSDate *lastReceiveDate;
    NSTimer *timer;
    int heartbeat;
    BOOL usePool;
    unsigned long _uin;
    int _connectedCount;
    BOOL _expectHelloMessage;
    NSString *_serverIpAddress;
    NSString *_serverHostAndPort;
    unsigned int _lastSeqId;
    SingleHourglass *_shakeSingleHourglass;
}

@property(retain, nonatomic) SingleHourglass *shakeSingleHourglass; // @synthesize shakeSingleHourglass=_shakeSingleHourglass;
@property(nonatomic) unsigned int lastSeqId; // @synthesize lastSeqId=_lastSeqId;
@property(retain, nonatomic) NSString *serverHostAndPort; // @synthesize serverHostAndPort=_serverHostAndPort;
@property(nonatomic) BOOL expectHelloMessage; // @synthesize expectHelloMessage=_expectHelloMessage;
@property(retain, nonatomic) NSString *serverIpAddress; // @synthesize serverIpAddress=_serverIpAddress;
@property(nonatomic) float tryTime; // @synthesize tryTime;
@property(nonatomic) int status; // @synthesize status;
@property(retain, nonatomic) ASIHTTPRequest *pURLConnection; // @synthesize pURLConnection;
- (void).cxx_destruct;
- (id)_getRandomString;
- (void)_statMsgCommand:(id)arg1 firstMsg:(id)arg2 messageCount:(unsigned int)arg3 otherMessageId:(id)arg4 lastSeqID:(unsigned int)arg5;
- (void)_statHelloCommand:(id)arg1;
- (BOOL)_isCommandContainsMsg:(id)arg1;
- (BOOL)_isHelloMessage:(id)arg1;
- (id)_parseMsgContent:(id)arg1;
- (void)_onConnectSuccessed;
- (void)onLogOut;
- (void)dealloc;
- (void)dispatchSingleCommand:(id)arg1;
- (void)dispatchCommand:(id)arg1;
- (void)processJasonData:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)checkConnection;
- (void)resetTryTime;
- (void)plusTryTime;
- (void)start;
- (void)stop;
- (void)startAfterNetAvailable;
- (void)netAvailable:(id)arg1;
- (id)initWithUin:(unsigned long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
