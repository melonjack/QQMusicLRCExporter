//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDApplicationDataSource.h"
#import "IDApplicationDelegate.h"
#import "MCFeatureController.h"

@class IDApplication, MCAudioServiceDummy, MCFeatureConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface MCDefaultFeatureController : NSObject <IDApplicationDelegate, IDApplicationDataSource, MCFeatureController>
{
    IDApplication *_application;
    MCFeatureConfiguration *_featureConfiguration;
    MCAudioServiceDummy *_audioServiceDummy;
}

@property(retain) MCAudioServiceDummy *audioServiceDummy; // @synthesize audioServiceDummy=_audioServiceDummy;
@property(readonly) MCFeatureConfiguration *featureConfiguration; // @synthesize featureConfiguration=_featureConfiguration;
@property(readonly) IDApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)databasesUsingMatch:(id)arg1;
- (void)applicationDidStop:(id)arg1;
- (void)applicationRestoreMainHmiState:(id)arg1;
- (void)application:(id)arg1 didFailToStartWithError:(id)arg2;
- (void)applicationDidStart:(id)arg1;
- (void)application:(id)arg1 didConnectToVehicle:(id)arg2;
- (id)imageDatabasesForApplication:(id)arg1;
- (id)textDatabasesForApplication:(id)arg1;
- (id)hmiDescriptionForApplication:(id)arg1;
- (id)manifestForApplication:(id)arg1;
- (void)deregisterFromAppSwitcher;
- (void)registerWithAppSwitcher;
@property(readonly, getter=isConnected) BOOL connected;
- (BOOL)featureDoesHandleURL:(id)arg1;
- (id)audioService;
- (id)hmiService;
- (BOOL)featureRequiresConnectionToVehicle;
- (BOOL)featureUsesRemoteHMI;
- (BOOL)featureRequiresNBT;
- (id)featureVersion;
- (id)featureIdentifier;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithApplication:(id)arg1 featureConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

