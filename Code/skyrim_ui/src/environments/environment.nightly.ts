import { Provider } from '@angular/core';


export const environment = {
  production: true,
  nightlyBuild: true,
  game: true,
  urlProtocol: 'https',
  url: 'skyrim-reborn-list.skyrim-together.com',
  intervalPingWebSocket: 5, // seconds
  chatMessageLengthLimit: 512,
  nbReconnectionAttempts: 5,

  providers: [] as Provider[],
};
