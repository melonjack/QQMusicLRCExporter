//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DownloadProperty : NSObject
{
    BOOL _useMid;
    NSString *_host;
    int _songRateType;
    int _downloadErrorCode;
}

+ (id)createDownloadProperty:(id)arg1 songRateType:(int)arg2;
@property int downloadErrorCode; // @synthesize downloadErrorCode=_downloadErrorCode;
@property BOOL useMid; // @synthesize useMid=_useMid;
@property int songRateType; // @synthesize songRateType=_songRateType;
@property(retain) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end

