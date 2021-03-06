//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface TTURLRequest : NSObject
{
    NSString *_urlPath;
    NSString *_httpMethod;
    NSData *_httpBody;
    NSMutableDictionary *_parameters;
    NSMutableDictionary *_headers;
    NSString *_contentType;
    unsigned int _charsetForMultipart;
    NSMutableArray *_files;
    id <TTURLResponse> _response;
    int _cachePolicy;
    double _cacheExpirationAge;
    NSString *_cacheKey;
    NSDate *_timestamp;
    int _totalBytesLoaded;
    int _totalBytesExpected;
    double _timeoutInterval;
    int _totalBytesDownloaded;
    int _totalContentLength;
    id _userInfo;
    BOOL _isLoading;
    BOOL _shouldHandleCookies;
    BOOL _respondedFromCache;
    BOOL _filterPasswordLogging;
    BOOL _multiPartForm;
    NSMutableArray *_delegates;
    long _connectDuration;
    long _downloadDuration;
}

+ (id)requestWithURL:(id)arg1 delegate:(id)arg2;
+ (id)request;
@property long downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property long connectDuration; // @synthesize connectDuration=_connectDuration;
@property(readonly, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) BOOL multiPartForm; // @synthesize multiPartForm=_multiPartForm;
@property(nonatomic) BOOL filterPasswordLogging; // @synthesize filterPasswordLogging=_filterPasswordLogging;
@property(nonatomic) BOOL respondedFromCache; // @synthesize respondedFromCache=_respondedFromCache;
@property(nonatomic) BOOL shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) int totalContentLength; // @synthesize totalContentLength=_totalContentLength;
@property(nonatomic) int totalBytesDownloaded; // @synthesize totalBytesDownloaded=_totalBytesDownloaded;
@property(nonatomic) int totalBytesExpected; // @synthesize totalBytesExpected=_totalBytesExpected;
@property(nonatomic) int totalBytesLoaded; // @synthesize totalBytesLoaded=_totalBytesLoaded;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) double cacheExpirationAge; // @synthesize cacheExpirationAge=_cacheExpirationAge;
@property(nonatomic) int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(retain, nonatomic) id <TTURLResponse> response; // @synthesize response=_response;
@property(nonatomic) unsigned int charsetForMultipart; // @synthesize charsetForMultipart=_charsetForMultipart;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(copy, nonatomic) NSString *URL;
- (id)createNSURLRequest;
- (void)ImageRequestCancel;
- (void)cancel;
- (BOOL)sendSynchronously;
- (BOOL)ImageRequestSend;
- (BOOL)send;
- (void)addFile:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (id)generatePostBody;
- (void)appendImageData:(id)arg1 withName:(id)arg2 toBody:(id)arg3;
- (id)generateNonMultipartPostBody;
- (id)generateCacheKey;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;

@end

