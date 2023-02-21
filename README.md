# kaak-troll-for-mac
I added the kaak and student kaak to this work, however the original program belongs to https://samperson.itch.io/desktop-goose , https://www.youtube.com/watch?v=EQx6fyrZDWM)

To run the troll:
To run the duck when opening the terminal
```
  git clone https://github.com/Salem-1/kaak-mac.git && \
  mv kaak-mac ~/. && \
  cd && \
  cp .zshrc Documents/. && \
  echo "open kaak-mac/Desktop\ Goose\ for\ Mac\ v0.22/Desktop\ Goose.app &" >> .zshrc_tmp && \
  cp ~/kaak-mac/Desktop\ Goose\ for\ Mac\ v0.22/shut_up .
  echo  alias shutup="'~/shut_up'" >> .zshrc_tmp && \
  cat .zshrc >> .zshrc_tmp && \
  mv  .zshrc_tmp .zshrc &&
  exit
```

To run herd of Ducks after 30 mins
or
```
  git clone https://github.com/Salem-1/kaak-mac.git && \
  cd kaak-mac/Desktop\ Goose\ for\ Mac\ v0.22 && \
  screen -d -m "./kaak &" \
  sleep 5 \
  exit
```

To run herd of Ducks Immediatly
or

```
  git clone https://github.com/Salem-1/kaak-mac.git && \
  cd kaak-mac/Desktop\ Goose\ for\ Mac\ v0.22 && \
  screen -d -m ./student_kaak& ;
  sleep 3 ;
  exit
```
to stop the troll go to the same directory as before
  ```
  cd kaak-mac/Desktop\ Goose\ for\ Mac\ v0.22 && \
  ./shut_up &
```

Don't forget to Increase the volume to the Max :)
