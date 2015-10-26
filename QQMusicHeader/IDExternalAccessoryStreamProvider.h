//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDStreamProvider.h"

@class EAAccessory, EASession, NSString, NSTimer;

@interface IDExternalAccessoryStreamProvider : NSObject <IDStreamProvider>
{
    id <IDStreamProviderDelegate> _delegate;
    EAAccessory *_externalAccessory;
    EASession *_externalAccessorySession;
    unsigned int _setupEASessionStartupDelay;
    unsigned int _setupEASessionRetryCount;
    id _accessoryDidConnectNotificationObserver;
    id _accessoryDidDisconnectNotificationObserver;
    NSTimer *_setupEASessionRetryTimer;
    unsigned int _setupEASessionRetriesLeft;
    double _setupEASessionRetryInterval;
}

@property unsigned int setupEASessionRetriesLeft; // @synthesize setupEASessionRetriesLeft=_setupEASessionRetriesLeft;
@property(retain) NSTimer *setupEASessionRetryTimer; // @synthesize setupEASessionRetryTimer=_setupEASessionRetryTimer;
@property(retain) id accessoryDidDisconnectNotificationObserver; // @synthesize accessoryDidDisconnectNotificationObserver=_accessoryDidDisconnectNotificationObserver;
@property(retain) id accessoryDidConnectNotificationObserver; // @synthesize accessoryDidConnectNotificationObserver=_accessoryDidConnectNotificationObserver;
@property double setupEASessionRetryInterval; // @synthesize setupEASessionRetryInterval=_setupEASessionRetryInterval;
@property unsigned int setupEASessionRetryCount; // @synthesize setupEASessionRetryCount=_setupEASessionRetryCount;
@property unsigned int setupEASessionStartupDelay; // @synthesize setupEASessionStartupDelay=_setupEASessionStartupDelay;
@property(retain) EASession *externalAccessorySession; // @synthesize externalAccessorySession=_externalAccessorySession;
@property(retain) EAAccessory *externalAccessory; // @synthesize externalAccessory=_externalAccessory;
@property __weak id <IDStreamProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isValidExternalAccessory:(id)arg1;
- (BOOL)isCurrentExternalAccessory:(id)arg1;
- (id)externalAccessoryForProtocol:(id)arg1;
- (void)notifyAccessoryDidDisappear;
- (void)notifyAccessoryDidAppear;
- (void)informDelegateAndCleanUp;
- (void)handleSetupEASessionRetryTimer:(id)arg1;
- (void)setupExternalAccessorySession:(id)arg1 afterDelay:(double)arg2;
- (void)setupExternalAccessorySession:(id)arg1;
- (void)cancelExternalAccessorySessionSetup;
- (void)startExternalAccessorySessionSetup:(id)arg1;
- (void)reset;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
