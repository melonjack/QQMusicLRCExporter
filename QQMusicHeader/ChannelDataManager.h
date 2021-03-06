//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtocolHostDelegate.h"
#import "UsrChannelDataSynchronizerDelegate.h"

@class AlbumIntroductionProtocol, ChannelV4Category, DetailSubscribedListProtocol, FirstReleaseProtocol, FocusProtocol, ForMeRecData, MainSubscribedListProtocol, MusicCircleFeed, MusicListCategory, NSMutableArray, NSMutableDictionary, NSString, NSTimer, ShareObject, SubscribeListItem, UsrChannelDataSynchronizer;

__attribute__((visibility("hidden")))
@interface ChannelDataManager : NSObject <ProtocolHostDelegate, UsrChannelDataSynchronizerDelegate>
{
    NSMutableDictionary *_memoryCache;
    UsrChannelDataSynchronizer *_synchronizer;
    MainSubscribedListProtocol *_mainSubscribedListProtocol;
    NSMutableArray *_focusChannelItems;
    NSMutableArray *_channelTypeItems;
    BOOL _mainSubscribeListDidUpdate;
    DetailSubscribedListProtocol *_detailSubscribedListProtocol;
    FirstReleaseProtocol *_firstReleaseProtocol;
    AlbumIntroductionProtocol *_albumIntroProtocol;
    FocusProtocol *_focusProtocol;
    NSMutableDictionary *_subscribedChannelsDidUpdated;
    double _refreshInterval;
    NSMutableDictionary *_categoryClusterCache;
    BOOL _fecthRadioData;
    SubscribeListItem *_subscribeListItem;
    NSMutableArray *_guessYouLikeSongRecords;
    MusicListCategory *_selectedCategory;
    int _recordingRadioId;
    NSMutableArray *_playedRadioSongList;
    NSMutableArray *_expInfosList;
    ChannelV4Category *_curSelectedCategory;
    ShareObject *_requestPlayingShareObj;
    ForMeRecData *_requestPlayingForMeObj;
    MusicCircleFeed *_requestPlayingMusicCircleObj;
    NSMutableArray *_recentLitenRadio;
    NSTimer *_channelHomeDataRefreshTimer;
    NSTimer *_recommandRefreshTimer;
    NSTimer *_squareRefreshTimer;
}

+ (void)resetChannelRootVCToLastestVersionIfNewUser;
+ (id)getCacheKey:(id)arg1 channelItem:(id)arg2;
+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *squareRefreshTimer; // @synthesize squareRefreshTimer=_squareRefreshTimer;
@property(retain, nonatomic) NSTimer *recommandRefreshTimer; // @synthesize recommandRefreshTimer=_recommandRefreshTimer;
@property(retain, nonatomic) NSTimer *channelHomeDataRefreshTimer; // @synthesize channelHomeDataRefreshTimer=_channelHomeDataRefreshTimer;
@property(retain, nonatomic) NSMutableArray *recentLitenRadio; // @synthesize recentLitenRadio=_recentLitenRadio;
@property(retain) MusicCircleFeed *requestPlayingMusicCircleObj; // @synthesize requestPlayingMusicCircleObj=_requestPlayingMusicCircleObj;
@property(retain) ForMeRecData *requestPlayingForMeObj; // @synthesize requestPlayingForMeObj=_requestPlayingForMeObj;
@property(retain) ShareObject *requestPlayingShareObj; // @synthesize requestPlayingShareObj=_requestPlayingShareObj;
@property(retain) ChannelV4Category *curSelectedCategory; // @synthesize curSelectedCategory=_curSelectedCategory;
@property(retain) NSMutableArray *expInfosList; // @synthesize expInfosList=_expInfosList;
@property(retain) NSMutableArray *playedRadioSongList; // @synthesize playedRadioSongList=_playedRadioSongList;
@property int recordingRadioId; // @synthesize recordingRadioId=_recordingRadioId;
@property(retain) MusicListCategory *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
@property(retain) NSMutableArray *guessYouLikeSongRecords; // @synthesize guessYouLikeSongRecords=_guessYouLikeSongRecords;
@property(retain) SubscribeListItem *subscribeListItem; // @synthesize subscribeListItem=_subscribeListItem;
- (void).cxx_destruct;
- (id)todayDateByFormatYYYYMMDD;
- (void)autoLoadGuessLikeRadioSongs;
- (void)addRecentListenRadioCome:(id)arg1;
- (void)uploadRecentListenRadio;
- (void)saveRecentListenRadio;
- (void)loadRecentListenRadio;
- (void)cleanCachedData;
- (void)UsrChannelDataSynchronizer:(id)arg1 didSynchronizeWithResult:(int)arg2 returnCode:(int)arg3;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)_syncSingerListenData;
- (void)_onNotifyTaogeDarenFollowListNeedChange:(id)arg1;
- (void)_logout;
- (void)_loginSuccess;
- (id)_filePathForSongRecordOfGuessYouLikeRadio;
- (void)_saveGuessYouLikeSongRecordsToFile;
- (void)_restorGuessYouLikeSongRecordsFromFile;
- (void)_recordGuessYouLikeSongList:(id)arg1;
- (void)_playListIndexChanged:(id)arg1;
- (void)changRadioSongList;
- (id)_memCacheKeyForRadio:(int)arg1;
- (void)safeStopSquareRefreshTimer;
- (void)restartSquareRefreshTimer:(double)arg1;
- (void)safeStopRecommandRefreshTimer;
- (void)restartRecommandRefreshTimer:(double)arg1;
- (void)_safeStopChannelHomeRefreshTimer;
- (void)_restartChannelHomeRefreshTimer:(SEL)arg1;
- (void)_postNotification:(id)arg1 data:(id)arg2;
- (void)_postChannelHomeDataDidUpdateNotification;
- (void)_postSongFolderListDidUpdateNotification:(id)arg1;
- (void)_postFocusItemsDidUpdateNotification;
- (void)_postAlbumIntroductionDidUpdateNotification:(id)arg1;
- (void)_postTopicChannelListDidUpdateNotification:(id)arg1;
- (void)_postRadioSongListDidUpdateNotification:(id)arg1;
- (void)postUpdateNotificationForSongList:(id)arg1;
- (void)_postSongListDidUpdateNotification:(id)arg1 netProtocol:(id)arg2;
- (void)_postFirstReleaseListDidUpdateNotification:(id)arg1;
- (void)_postDetailSubscribeListDidUpdateNotification:(id)arg1;
- (BOOL)_subscribeListDidUpdate:(id)arg1;
- (void)_archiveDetailSubscribeListToCacheFile:(id)arg1;
- (BOOL)_restoreDetailSubscribeListFromCachedFileIfExist:(id)arg1;
- (void)_postSubscribeListDidUpdateNotification;
- (void)_archiveSubscribeListToCacheFile;
- (BOOL)_restoreSubscribeListFromCachedFileIfExist;
- (id)_pendingReorderData;
- (id)_pendingSubscribeData;
- (void)_postSubscribedChannelsDidUpdateNotification;
- (BOOL)_restoreFromiChannelFileIfExist;
- (id)_iChannelFile;
- (BOOL)_hasiChannelFile;
- (id)_generateErrorWithErrorMsg:(id)arg1 errorCode:(int)arg2;
- (void)_postNotification:(id)arg1 withErrorMsg:(id)arg2 andErrorCode:(int)arg3 andResult:(int)arg4;
- (void)_saveDataToMemCache:(id)arg1 withKey:(id)arg2;
- (id)_fetchDataFromMemCache:(id)arg1;
- (void)_appWillTerminate;
- (id)getCategoryClusterCacheByCategoryId:(int)arg1;
- (void)addCategoryClusterCache:(id)arg1 withCategoryId:(int)arg2;
- (BOOL)getCategoryDetailList:(id)arg1 ByCluster:(id)arg2 QueryType:(int)arg3 ForceRefresh:(BOOL)arg4;
- (void)doFetchV4CategoryPageData:(BOOL)arg1;
- (void)delayFetchV4CategoryData:(id)arg1;
- (void)fetchV4CategoryPageData:(BOOL)arg1;
- (void)reFetchCurCategorySquareData;
- (void)delayFetchSquareDataWithObject:(id)arg1;
- (void)fetchChannelSqureData:(id)arg1 andForceRefresh:(BOOL)arg2;
- (void)reportSongListPlayAction:(id)arg1;
- (void)_playListDidChange:(id)arg1;
- (void)postReadyToPlayMusicCircleObjNotification:(id)arg1;
- (id)cacheKeyForRequestingMusicCircleObj;
- (void)requestPlayingSongListForMusicCircleObj:(id)arg1 from:(int)arg2;
- (void)postReadyToPlayForMeObjNotification:(id)arg1;
- (id)cacheKeyForRequestingForMeObj;
- (void)requestPlayingSongListForForMeObj:(id)arg1 from:(int)arg2;
- (void)postReadyToPlayShareObjNotification:(id)arg1;
- (id)cacheKeyForRequestingShareObj;
- (void)requestPlayingSongListForShareObj:(id)arg1;
- (id)getTaogeDarenFollowActionKey:(unsigned long)arg1;
- (void)followTaogeDaren:(unsigned long)arg1 andIsFollow:(BOOL)arg2;
- (id)getTaogeDarenListKey:(unsigned long)arg1;
- (void)fetchFollowedTaogeDarenListForUser:(unsigned long)arg1;
- (void)clearGuessYouLikeCacheData;
- (void)didReceiveMemoryWarning;
- (id)cacheKeyForRadioListOfCategory:(int)arg1;
- (void)delayFetchRadioListByCategoryId:(id)arg1;
- (void)fetchRadioListByCategoryId:(int)arg1;
- (void)delayFetchDetailChannelListByTypeData:(id)arg1;
- (void)fetchDetailChannelListByType:(int)arg1;
- (BOOL)fetchCategoricalSongFolderList:(id)arg1 loadMore:(BOOL)arg2 from:(int)arg3;
- (void)fetchRadioCategories;
- (void)getCategoriesDataWhenLogin;
- (void)fetchSquareCategories;
- (void)fetchMusicListCategories;
- (id)generateChannelHomeData;
- (void)doFetchNewChannelHomeData:(BOOL)arg1;
- (void)delayFetchNewChannelHomeData:(id)arg1;
- (void)fetchNewChannelHomeData:(BOOL)arg1;
- (void)fetchNewChannelHomeData;
- (void)doFetchChannelHomeData:(BOOL)arg1;
- (void)fetchChannelHomeData:(BOOL)arg1;
- (void)fetchChannelHomeData;
- (id)getSongFolderListKey:(id)arg1;
- (void)delayFetchFocusData:(id)arg1;
- (BOOL)hasCacheDataForFocusItems;
- (void)fetchFocusItems:(BOOL)arg1;
- (void)fetchFocusItems;
- (BOOL)hasCacheDataForAlbumIntroduction:(id)arg1;
- (void)fetchAlbumIntroduction:(id)arg1;
- (void)doFetchV4RecommendPageData:(BOOL)arg1;
- (void)doFetchV4RecommendPageDataForce;
- (void)delayFetchV4RecommendData:(id)arg1;
- (void)fetchV4RecommendPageData:(BOOL)arg1;
- (void)fetchV4RecommendPageData;
- (BOOL)hasNextPageForTopicChannelList:(id)arg1;
- (BOOL)hasCacheDataForTopicChannelList:(id)arg1;
- (void)fetchTopicChannelList:(id)arg1 loadMore:(BOOL)arg2 channelItem:(id)arg3;
- (void)saveCacheData:(id)arg1 forRadioSongList:(int)arg2;
- (BOOL)hasCacheDataForRadioSongList:(int)arg1;
- (id)listBaseInILikeRadio;
- (void)fetchRadioSongList:(int)arg1 refresh:(BOOL)arg2;
- (void)fetchRadioSongList:(int)arg1 refresh:(BOOL)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)handleRadioProtocolFinish:(id)arg1 workResult:(int)arg2;
- (BOOL)hasNextPageForSongList:(id)arg1;
- (BOOL)hasCacheDataForSongList:(id)arg1;
- (void)fetchSongList:(id)arg1 loadMore:(BOOL)arg2 channelItemKey:(id)arg3 from:(int)arg4 forceRefresh:(BOOL)arg5;
- (void)removeSongListCache:(id)arg1;
- (Class)_getTopicChannelProtocolClass:(id)arg1;
- (Class)_getChannelInfoProtocolClass:(id)arg1;
- (BOOL)hasNextPageForFirstReleaseList;
- (BOOL)hasCacheDataForFirstReleaseList;
- (void)fetchFirstReleaseList:(id)arg1 loadMore:(BOOL)arg2 channelItemKey:(id)arg3;
- (BOOL)hasCacheDataForDetailSubscribeList:(id)arg1;
- (void)fetchDetailSubscribeList:(id)arg1;
- (BOOL)hasCacheDataForSubscribeList;
- (void)fetchMainSubscribeList;
- (void)archivePendingReorderData;
- (void)unsubscribeChannel:(id)arg1;
- (void)subscribeChannel:(id)arg1;
- (BOOL)isSubscribedChannel:(id)arg1;
- (void)archiveiChannelFile;
- (BOOL)channelsDidUpdatedForUin:(unsigned long)arg1;
- (void)updateSubscribedChannels;
- (void)awake;
- (id)getSonglistFromFolderInfo:(id)arg1;
- (void)removeLatestFavBySelf:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

