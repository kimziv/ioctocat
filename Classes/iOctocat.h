#import <UIKit/UIKit.h>
#import "LoginController.h"
#import "MyFeedsController.h"
#import "ASINetworkQueue.h"


@class GHUser, GHOrganization;

@interface iOctocat : NSObject <UIApplicationDelegate, UIActionSheetDelegate> {
  @private
    IBOutlet UIWindow *window;
    IBOutlet UITabBarController *tabBarController;
	IBOutlet UIView *authView;
	IBOutlet MyFeedsController *feedController;
	UIActionSheet *authSheet;
	NSMutableDictionary *users;
	NSMutableDictionary *organizations;
	NSDate *didBecomeActiveDate;
	BOOL launchDefault;
}

@property(nonatomic,retain)NSMutableDictionary *users;
@property(nonatomic,retain)NSMutableDictionary *organizations;
@property(nonatomic,retain)NSDate *didBecomeActiveDate;
@property(nonatomic,readonly)LoginController *loginController;

+ (ASINetworkQueue *)queue;
+ (iOctocat *)sharedInstance;
+ (NSDate *)parseDate:(NSString *)theString withFormat:(NSString *)theFormat;
- (GHUser *)currentUser;
- (UIView *)currentView;
- (GHUser *)userWithLogin:(NSString *)theLogin;
- (GHOrganization *)organizationWithLogin:(NSString *)theLogin;
- (NSInteger)gravatarSize;
- (NSDate *)lastReadingDateForURL:(NSURL *)url;
- (void)setLastReadingDate:(NSDate *)date forURL:(NSURL *)url;
- (NSString *)cachedGravatarPathForIdentifier:(NSString *)theString;

@end

