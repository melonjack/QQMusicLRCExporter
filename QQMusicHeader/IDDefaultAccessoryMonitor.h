//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDAbstractAccessoryMonitor.h"

#import "IDVehicleInformationRetrieverDelegate.h"

@class IDRhmiFeatureSwitcher, IDVehicleInformationRetriever, NSString;

@interface IDDefaultAccessoryMonitor : IDAbstractAccessoryMonitor <IDVehicleInformationRetrieverDelegate>
{
    IDVehicleInformationRetriever *_vehicleInfoRetriever;
    IDRhmiFeatureSwitcher *_switcher;
}

@property(retain) IDRhmiFeatureSwitcher *switcher; // @synthesize switcher=_switcher;
@property(retain) IDVehicleInformationRetriever *vehicleInfoRetriever; // @synthesize vehicleInfoRetriever=_vehicleInfoRetriever;
- (void).cxx_destruct;
- (void)vehicleinformationRetriever:(id)arg1 didFailWithError:(id)arg2;
- (void)vehicleinformationRetrieverDidRetrieveVehicleInformation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

