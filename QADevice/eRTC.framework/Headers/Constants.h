//
//  Constants.h
//  eRTC
//
//  Created by rakesh  palotra on 05/12/18.
//  Copyright © 2018 rakesh  palotra. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

#endif /* Constants_h */

#define DidRecievedMessageNotification @"didRecievedMessageNotification"
#define DidRecievedTypingStatusNotification @"didRecievedTypingStatusNotification"
#define DidRecievedMessageReadStatusNotification @"didRecievedMessageReadStatusNotification"
#define DidRecievedAvailabilityStatusNotification @"didRecievedAvailabilityStatusNotification"
#define UpdateMessageStatusNotification @"updateMessageStatusNotification"
#define ContactDBUpdatedNotification @"contactDBUpdatedNotification"
#define DidReceivedGroupEvent @"groupEventReceived"
#define DidRecievedReactionNotification @"didRecievedReactionNotification"
#define DidUpdateChatNotification @"didUpdateChatNotification"
#define DidDeleteChatMessageNotification @"didDeleteChatMessageNotification"
#define DidUserDeactivated @"didUserDeactivated"
#define DiduserCheckAvailability @"diduserCheckAvailability"




#define MsgDeliveredStatus @"delivered"
#define MsgReadStatus @"seen"
#define MsgSendingStatus @"sending"
#define IncreaseMessageReadCount 1
#define DecreaseMessageReadCount 2

#define bCoreDataBundle @"Frameworks/eRTC.framework/eRTC"
#define Authorize_Header_Key @"Basic cGFudGVwaWN1c2VyOjIzMzFzZDU2YTQ1NnMzZDE0YXM2"

 /* API methods name */
//#define Get_Tenant_Details @"http://app.ripbullertc.com/v1/tenants/get-tenant-details/"

// Used for staging server
//#define Get_Tenant_Details @"https://prov-stage.ripbullertc.com/v1/tenants/get-tenant-details/"

// used for QA server
#define Get_Tenant_Details @"https://prov-qa.ripbullertc.com/v1/tenants/get-tenant-details/"

//used for production server
//#define Get_Tenant_Details @"https://prov.ripbullertc.com/v1/tenants/get-tenant-details/"

#define NewRelicApi @"https://log-api.newrelic.com/log/v1"
#define CHAT_ENDPOINT_VERSIONING @"v1/tenants/"
#define USER_ENDPOINT_VERSIONING @"v1/tenants/"
#define FCM_VERSIONING @"f1"
#define MQTT_VERSIONING @"m1"

/* User API method */
#define User_Login @"/users/login"
#define Get_Chat_UserList @"/getChatUsers"
#define Get_Search_UserList @"/searchUsers"
#define Get_UserList @"/users/getUser"
#define ForgotPassword @"/users/forgotPassword"
#define ChangePassword @"/changePassword"
#define ChatUser @"/user"
#define Update_UserProfile @"/updateUser"
#define Remove_UserProfile @"/removeProfilePic"
#define LOGOUT_USER @"/logout"
#define Remove_GroupProfile @"/removeProfilePic"

/* Chat API method */
#define ChatThread @"/thread"
#define ChatTextMessage @"/chat"
#define ChatMultipleTextMessage @"/chat/multiple"
#define Chat_Server_User @"/users"
#define addParticipants @"/addParticipants"
#define removeParticipants @"/removeParticipants"
#define makeDismissAdmin @"/makeDismissAdmin"
#define e2eChatTextMessage @"/chat/e2eEncrypted"
#define History @"/history"
#define Get_ChatSearch @"/search"
#define Group_User @"/group"

#define RefreshToken @"/refreshToken"
#define blockUnblock @"/blockUnblock"
#define blockedUsers @"/blockedUsers"
#define Create_Group @"group"
#define Update_Group @"group"
#define GroupByThreadId @"groupByThreadId"
#define userGroups @"userGroups"
#define ChatUserDetails @"chatUserDetails"
#define PendingEvents @"pendingEvents"
#define Get_User_PendingEvents @"/pendingEvents"
#define resetBadgeCount @"resetBadgeCount"
#define DeviceType @"deviceType"
#define DeviceId @"deviceId"
#define AutoPayLoad @"autoPayLoad"
#define DeviceType_IOS @"ios"

/* Key Type */
#define KeyType_Tenant @"tenant"
#define KeyType_User @"user"
#define KeyType_Chat @"chat"
#define KeyType_LastMessage @"lastMessage"

/* User Parsing key */
#define Success_Key @"success"
#define Result_Key @"result"
#define Message_Key @"msg"
#define Chat_Reaction_key @"reaction"
#define Reaction_EmojiCode_key @"emojiCode"
#define Reaction_Action_key @"action"
#define Reaction_Users_key @"reactionUsers"
#define Reaction_EmojiCount_key @"emojiCount"
#define Reaction_SetAction_key @"set"
#define Reaction_ClearAction_key @"clear"
#define Chat_Reaction_MQTT_Key @"chatReaction"
#define Chat_Update_MQTT_Key @"chatUpdate"
#define Chat_Update_Type_Key @"updateType"
#define Chat_Is_Forwarded_Key @"isForwarded"
#define Chat_Forward_Feature_Key @"forwardChatFeatureData"

#define Metadata @"metadata"
#define MsgRequestId @"msgRequestId"

#define eRTCUserId_Key @"eRTCUserId"
#define ChatUsers_Key @"chatUsers"
#define MoreDataAvailable_Key @"moreDataAvailable"
#define Thread_ID @"threadId"
#define RecepientAppUserId @"recipientAppUserId"
#define RecepienteRTCUserId @"recipienteRTCUserId"
#define Participants @"participants"
#define ThreadType @"threadType"
#define TenantId @"tenantId"
#define CreatedAt @"createdAt"
#define SenderTimeStampMs @"senderTimeStampMs"
#define CreatorId @"creatorId"
#define Parent_ID @"parentId"
#define Parent_Msg @"parentMsg"
#define ParentMessageID @"parentMessageID"

#define Is_Restored @"isRestored"

#define MSGUniqueID @"msgUniqueId"
#define MSGType @"msgType"
#define MESSAGE @"message"
#define SendereRTCUserID @"sendereRTCUserId"
#define SenderAppUserId @"senderAppUserId"
#define FilePath @"path"
#define ThumbNail @"thumbnail"
#define Threads_KEY @"thread"
#define SENDER @"sender"
#define TimeStamp @"timeStamp"
#define MsgStatusEvent @"msgStatusEvent"
#define UnReadMessageCount @"unReadMessageCount"
#define IsFavourite @"isFavourite"
#define IsEdited @"isEdited"
#define IsDeletedMSG @"isDeletedMsg"
#define GifyFileName @"gify"
#define GifFileName @"gif"
#define MsgTypeText @"text"


#define SenderKeyDetails_Key @"senderKeyDetails"
#define PublicKey @"publicKey"
//#define PrivateKey @"privateKey"
#define EncryptedChat @"encryptedChat"
#define E2EEncryptionKey @"e2eEncryptionKeys"
#define EncryptedChatList @"encryptedChatList"
#define ChatStatus @"chatStatus"
#define RetryRequired @"retryRequired"
#define ReturnCode @"returnCode"
#define SenderKeyValidatyExpired @"senderKeyValidityExpired"
#define ReceiverKeyValidationError @"receiverKeyValidationError"
#define SenderNewDeviceKeyAvailable @"senderNewDeviceKeyAvailable"
#define KeyList @"keyList"
#define MessageType_Text @"msgType"
#define Start_Thread @"startThread"
#define MediaFileName @"mediaFileName"
#define LocalFilePath @"localFilePath"
#define ReplyMsgConfig @"replyMsgConfig"
#define ReplyMsgConfigStatus @"replyMsgConfigstatus"
#define ReplyMsgCount @"replyMsgCount"
#define BaseMsgUniqueId @"baseMsgUniqueId"
#define OriginalMsgUniqueId @"originalMsgUniqueId"
#define ReplyThreadFeatureData @"replyThreadFeatureData"
#define App_User_ID @"appUserId"
#define User_ID @"userId"
#define User_Name @"name"
#define User_ProfilePic @"profilePic"
#define User_ProfilePic_Thumb @"profilePicThumb"
#define User_Profile_Status @"profileStatus"
#define USER_TOKEN @"token"
#define USER_APP_STATE @"appState"
#define USER_DELETED @"deleted"
#define USER_LOGIN_TIME_STAMP @"loginTimeStamp"
#define Groups @"groups"
#define Key_pendingEvents @"pendingEvents"
#define Notification_setting @"notificationSettings"
#define Allow_from @"allowFrom"
#define DeleteType_key @"deleteType"
#define CORRELATION_ID_KEY @"msgCorrelationId"


#define GroupId @"groupId"
#define GroupType @"groupType"
#define GroupName @"name"
#define GroupThreadId @"threadId"
#define GroupDescription @"description"

#define AvailabilityStatus @"availabilityStatus"

#define USERDEFAULT_GROUP_ID @"groupBundleIdentifire"
#define USERDEFAULT_APP_ID @"appBundleIdentifire"



/*Config Parsing key */
#define Config_ID @"_id"
#define Config_Name @"name"
#define Config_Enabled @"enabled"
#define Config_ApiKey @"apiKey"
#define Config_Url  @"url"
#define Config_ApiTenantIdKey @"tenantId"

#define Config_NameSpace @"nameSpace"
#define Config_Key @"config"
#define Config_LoginType @"loginType"
#define Config_BundleIds @"bundleIds"
#define Config_BundleIds_iOS @"ios"
#define Config_Features @"features"
#define Config_Features_chat @"chat"
#define Config_Features_chat_Enabled @"enabled"
#define Config_Features_GroupChat @"groupChat"
#define Config_Features_GroupChat_Enabled @"enabled"
#define Config_ServerUrls @"serverUrls"
#define Config_ServerUrls_ChatServer @"chatServer"
#define Config_ServerUrls_UserServer @"userServer"
#define Config_ServerUrls_MqttServer @"mqttServer"
#define Config_ServerDetails @"serverDetails"
#define Config_AccessToken @"accessToken"
#define Config_RefreshToken @"refreshToken"
#define Config_UserId @"userId"
#define Config_Token @"token"
#define Config_Features_Enabled @"enabled"
#define Config_Features_Text @"text"
#define Config_Features_Image @"image"
#define Config_Features_Audio @"audio"
#define Config_Features_Video @"video"
#define Config_Features_Location @"location"
#define Config_Features_Contact @"contact"
#define Config_Features_Document @"document"
#define Config_Features_GroupChat @"groupChat"
#define Config_Features_Media @"media"

#define HTTPMethodGet @"GET"
#define HTTPMethodPOST @"POST"
#define ContentType @"Content-Type"
#define AuthorisationKey @"Authorization"
#define AcceptKey @"Accept"
#define ContentTypeURLEncoded @"application/x-www-form-urlencoded; charset=utf-8"
#define ContentTypeJSON @"application/json"
#define ApiKey @"X-License-Key"
#define LicenseKey @"33d7b0e60989a3b7f917892712e718b36a4cNRAL"
