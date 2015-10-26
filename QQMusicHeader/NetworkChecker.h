//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo, NSCondition, NSDate, NSMutableArray, NSString;

@interface NetworkChecker : NSObject
{
    NSCondition *_mCondition;
    CTTelephonyNetworkInfo *_netInfo;
    BOOL _speedIsValid;
    BOOL _isCanceled;
    unsigned int currentWWANBytes;
    NSString *_pingHostName;
    NSMutableArray *_delegatesOfSpeed;
    NSMutableArray *_delegatesOfAvailablitiy;
    NSMutableArray *_delegatesOfReachabilityChanged;
    NSMutableArray *_delegatesOfEnterForeground;
    float _speed;
    unsigned int _lastMesureBytes;
    int _networkState;
    unsigned int _networkAvailableRetryCounter;
    NSDate *_lastDateOfGetNetworkState;
    NSString *_radioATG;
    int _cellNetType;
    double _lastMesureTime;
}

+ (BOOL)activeWLAN;
+ (BOOL)activeWWAN;
+ (BOOL)networkAvailable;
+ (id)sharedInstance;
@property BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) int cellNetType; // @synthesize cellNetType=_cellNetType;
@property(copy, nonatomic) NSString *radioATG; // @synthesize radioATG=_radioATG;
@property(retain) NSDate *lastDateOfGetNetworkState; // @synthesize lastDateOfGetNetworkState=_lastDateOfGetNetworkState;
@property unsigned int networkAvailableRetryCounter; // @synthesize networkAvailableRetryCounter=_networkAvailableRetryCounter;
@property int networkState; // @synthesize networkState=_networkState;
@property unsigned int lastMesureBytes; // @synthesize lastMesureBytes=_lastMesureBytes;
@property double lastMesureTime; // @synthesize lastMesureTime=_lastMesureTime;
@property float speed; // @synthesize speed=_speed;
@property BOOL speedIsValid; // @synthesize speedIsValid=_speedIsValid;
@property(retain) NSMutableArray *delegatesOfEnterForeground; // @synthesize delegatesOfEnterForeground=_delegatesOfEnterForeground;
@property(retain) NSMutableArray *delegatesOfReachabilityChanged; // @synthesize delegatesOfReachabilityChanged=_delegatesOfReachabilityChanged;
@property(retain) NSMutableArray *delegatesOfAvailablitiy; // @synthesize delegatesOfAvailablitiy=_delegatesOfAvailablitiy;
@property(retain) NSMutableArray *delegatesOfSpeed; // @synthesize delegatesOfSpeed=_delegatesOfSpeed;
@property(copy) NSString *pingHostName; // @synthesize pingHostName=_pingHostName;
@property unsigned int currentWWANBytes; // @synthesize currentWWANBytes;
- (void)appEnterForeground:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)didUpdate;
- (void)updateOnThread;
- (BOOL)shouldChangeForNetworkRecheck;
- (BOOL)shouldChangeForSpeed;
- (int)getCurrentNetworkState:(BOOL)arg1;
- (void)stopCheckingNetwork:(id)arg1 type:(int)arg2;
- (void)startCheckingNetwork:(id)arg1 type:(int)arg2;
- (void)removeDelegateObject:(id)arg1;
- (void)handleCTRadioAccessTechnologyDidChangeNotification;
- (void)updateRadioATG;
- (id)init;
- (void)dealloc;

@end
