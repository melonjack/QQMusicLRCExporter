//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FolderIcoUploadHistory : NSObject
{
    NSDate *_uploadTime;
    NSString *_uploadSuccessUrl;
}

@property(retain) NSString *uploadSuccessUrl; // @synthesize uploadSuccessUrl=_uploadSuccessUrl;
@property(retain) NSDate *uploadTime; // @synthesize uploadTime=_uploadTime;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

