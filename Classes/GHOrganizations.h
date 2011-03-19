#import <Foundation/Foundation.h>
#import "GHResource.h"


@class GHUser;

@interface GHOrganizations : GHResource {
	NSMutableArray *organizations;
  @private
    GHUser *user;
}

@property(nonatomic,retain)GHUser *user;
@property(nonatomic,retain)NSMutableArray *organizations;

- (id)initWithUser:(GHUser *)theUser andURL:(NSURL *)theURL;

@end
