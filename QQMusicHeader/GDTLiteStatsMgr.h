//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface GDTLiteStatsMgr : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *locManager;
    BOOL isGPSUpdating;
    NSString *sdkv;
    NSString *an;
    NSString *app_version_code;
    NSString *appn;
    NSString *uid;
    NSString *did;
    int idtype;
    int screen_x;
    int screen_y;
    NSString *lg;
    NSString *model;
    int tels;
    int wifis;
    NSString *system;
    NSString *os;
    NSString *osv;
    NSString *so;
    NSString *dn;
    NSNumber *lat;
    NSNumber *lng;
    NSString *mv;
    int pn;
    int apil;
    int lac;
    int cellid;
    NSString *neighborings;
    BOOL _isGpsOn;
    NSString *_appkey;
}

+ (id)instance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedGDTLiteStatsMgr;
@property(nonatomic) BOOL isGpsOn; // @synthesize isGpsOn=_isGpsOn;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(readonly, copy, nonatomic) NSString *decodeId; // @synthesize decodeId=did;
- (void).cxx_destruct;
- (BOOL)isRetina;
- (void)collectCGIRequestParam:(id)arg1;
- (id)macAddress;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)initializeData;
- (void)startUpdateLocation;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
