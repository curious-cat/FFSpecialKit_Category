//
//  CTMediator+Special.h
//  FFSpecialKit_Category
//
//  Created by curious_cat on 2017/12/13.
//



#import <CTMediator/CTMediator.h>
#import <FFAPIsKit/APIRequest.h>
#import <FFAPIsKit/FFReformProtocol.h>

@interface CTMediator (Special)

- (UIViewController*)specialDetailController;

- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)specialReformer;

- (APIRequest*)specialAPIRequest;


@end
