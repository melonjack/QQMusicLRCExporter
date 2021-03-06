//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSString;

@interface SvUserOpDataManager : NSObject
{
    NSMutableDictionary *uploadDataSet_;
    NSDate *appST_;
    NSDate *appET_;
    BOOL isChangable_;
    NSString *logPath_;
    NSString *channelID_;
    NSDate *_timestampOfLocating;
}

+ (void)accumulate:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *timestampOfLocating; // @synthesize timestampOfLocating=_timestampOfLocating;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=channelID_;
@property(retain, nonatomic) NSDate *appET; // @synthesize appET=appET_;
@property(retain, nonatomic) NSDate *appST; // @synthesize appST=appST_;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (double)updateTimeStampOfLocating;
- (void)reset;
- (void)accumulate:(id)arg1 count:(int)arg2;
- (BOOL)isChangable;
- (void)upload;
- (void)saveLog;
- (id)hardwarePlatform;
- (void)dealloc;
- (id)init;

@end

