//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMCHMILevel, FMCLockScreenStatus, FMCOnLockScreenStatus;

@interface FMCLockScreenManager : NSObject
{
    BOOL _bUserSelected;
    BOOL _bDriverDistractionStatus;
    BOOL _bHaveDDStatus;
    FMCHMILevel *_hmiLevel;
}

@property(nonatomic) BOOL bHaveDDStatus; // @synthesize bHaveDDStatus=_bHaveDDStatus;
@property(retain, nonatomic) FMCHMILevel *hmiLevel; // @synthesize hmiLevel=_hmiLevel;
@property(nonatomic) BOOL bDriverDistractionStatus; // @synthesize bDriverDistractionStatus=_bDriverDistractionStatus;
@property(nonatomic) BOOL bUserSelected; // @synthesize bUserSelected=_bUserSelected;
- (void).cxx_destruct;
@property(readonly, nonatomic) FMCLockScreenStatus *lockScreenStatus;
@property(readonly, nonatomic) FMCOnLockScreenStatus *lockScreenStatusNotification;
- (id)init;

@end

