//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioSessionDelegate.h"
#import "IDAudioServiceDelegate.h"

@class MCOffboardAudioService, NSString;

__attribute__((visibility("hidden")))
@interface MCAudioManager : NSObject <IDAudioServiceDelegate, AVAudioSessionDelegate>
{
    BOOL _entertainmentChannelActivationInProgress;
    BOOL _interruptChannelActivationInProgress;
    BOOL _connectedToVehicle;
    BOOL _phoneCallInProgress;
    MCOffboardAudioService *_offboardAudioService;
    id <MCAudioManagerDelegate> _audioDelegate;
}

+ (id)defaultAudioManager;
@property BOOL phoneCallInProgress; // @synthesize phoneCallInProgress=_phoneCallInProgress;
@property BOOL connectedToVehicle; // @synthesize connectedToVehicle=_connectedToVehicle;
@property BOOL interruptChannelActivationInProgress; // @synthesize interruptChannelActivationInProgress=_interruptChannelActivationInProgress;
@property BOOL entertainmentChannelActivationInProgress; // @synthesize entertainmentChannelActivationInProgress=_entertainmentChannelActivationInProgress;
@property(nonatomic) id <MCAudioManagerDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
@property(retain) MCOffboardAudioService *offboardAudioService; // @synthesize offboardAudioService=_offboardAudioService;
- (void).cxx_destruct;
- (id)statusMessageWithStatus:(long)arg1;
- (id)audioService;
- (void)activateAVAudioSession:(BOOL)arg1;
- (void)configureAVAudioSession;
- (void)endInterruption;
- (void)beginInterruption;
@property(readonly, copy) NSString *description;
- (void)audioServiceInterruptActivationDenied:(id)arg1;
- (void)audioServiceInterruptActivationGranted:(id)arg1;
- (void)audioServiceEntertainmentActivationDenied:(id)arg1;
- (void)audioServiceEntertainmentActivationGranted:(id)arg1;
- (void)audioService:(id)arg1 multimediaButtonEvent:(int)arg2;
- (void)audioService:(id)arg1 interruptStateChanged:(int)arg2;
- (void)audioService:(id)arg1 entertainmentStateChanged:(int)arg2;
- (int)interruptChannelAudioState;
- (int)entertainmentChannelAudioState;
- (void)deactivateInterruptChannel;
- (void)activateInterruptChannel;
- (void)deactivateEntertainmentChannelAndReleaseAVAudioSession:(BOOL)arg1;
- (void)activateEntertainmentChannel;
- (void)communicationCurrentCallInfoDidChange:(id)arg1;
- (void)handleVehicleDidDisconnectNotification:(id)arg1;
- (void)handleVehicleDidConnectNotification:(id)arg1;
- (void)configureAudioManagerforOnboardUsage;
- (void)configureAudioManagerForOffboardUsage;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

