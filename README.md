# Bikestop
#Resumo
Esse artigo apresenta uma proposta de desenvolvimento diferenciada, na elaboração de um raciocínio estruturado utilizando ferramentas computacionais para a solução de um problema físico de segurança. Ao aproveitar de tecnologias de baixo custo é possível construir um bicicletário funcional, com travas automatizadas, onde os “traves” e “destraves” dependem apenas de uma carteirinha de autenticação acadêmica.


#Palavras Chaves: Arduino, Node MCU, Firebase, bicicleta, IoT, campus
#Introdução
Para compreensão do projeto, Internet of Things ou IoT refere-se a bilhões de dispositivos físicos em todo o mundo que agora estão conectados à Internet, coletando e compartilhando dados. Esses dispositivos são incorporados a eletrônicos, softwares, sensores, atuadores e conectores, permitindo que eles se comuniquem sem que um ser humano esteja envolvido e mesclando o mundo digital e físico. A conectividade desses dispositivos permitirá que os usuários acessem informações em tempo real, enquanto fornece insights e análises para ajudá-los a tomar decisões mais inteligentes e informadas em suas vidas diárias. Assim, este projeto apresenta uma rede controlada por sensores RFID baseada em IoT para campi inteligentes. O objetivo é desenvolver e implementar o conceito de IoT supracitado para projetar em um ambiente inteligente do campus, a junção entre tecnologia e segurança. Construído sobre uma placa de prototipação simples e um método de autenticação, uma forma eficiente de manter um bicicletário mais seguro para os alunos e de maneira auto regulamentada.

#Desenvolvimento
#1.    Referencial Teórico
 
Esta seção cobre a revisão de literatura de alguns artigos acadêmicos e publicações especializadas, o que leva a uma tomada de decisão mais informada ao planejar o projeto.
 
#1.1. Estado da Arte de IoT
 
Como a rápida mudança na tecnologia sempre visa servir a humanidade, a expectativa de viver uma vida simples, porém avançada, continua aumentando. A Internet se tornou uma parte importante da vida social e educacional dos seres humanos, sem a qual eles são impotentes. Os dispositivos da Internet das Coisas (IoT) não apenas controlam, mas também monitoram os sistemas eletrônicos, elétricos e mecânicos utilizados em vários tipos de infra-estruturas.
A automação, seja residencial, industrial ou sócio-urbana e utilizando o IoT é uma das melhores tecnologias para beneficiar nosso cotidiano e tornar o país economicamente promissor. Automação pode ser definida como a remoção da interação humana.
O crescimento explosivo em dispositivos conectados é a convergência de vários fatores e tecnologias - ampla disponibilidade de rede de dados celulares, redes Wi-Fi(Wireless Fidelity), penetração de dispositivos móveis, adoção de dispositivos inteligentes, análise em tempo real, aprendizado de máquina, sensores, sistemas embarcados, velocidades de comunicação mais rápidas, Big data, aplicações em nuvem e sistemas maturidade de capacidade etc., que contribuíram para o crescimento do IoT.
Para um panorama, em 2016 foram 6 bilhões de "coisas" conectadas. Em 2017 foram 8 bilhões de dispositivos, superando a população mundial, com um total de US $ 1,6 trilhão em gastos na área, e haverá 20 bilhões de “coisas” conectadas em 2020.
 
#1.3. RFID (Identificação Por Radiofrequência)
 
A identificação por radiofrequência (RFID) é um sistema que transmite a identidade de um objeto ou pessoa sem fio usando ondas de rádio na forma de um número de série. O primeiro uso do dispositivo RFID aconteceu na Segunda Guerra Mundial em Brittan e é usado para identificação de amigo ou inimigo em 1948. Mais tarde, a tecnologia RFID é fundada na Auto-ID no MIT no ano de 1999. A tecnologia RFID desempenha um papel importante na IoT para resolver problemas de identificação de atores e objetos ao nosso redor de uma maneira econômica. A tecnologia é classificada em três categorias com base na provisão de energia: RFID ativo, RFID passivo e RFID semi-passivo.
Os principais componentes do RFID são etiqueta, leitor, antena, controlador de acesso, software e servidor. É mais confiável, eficiente, seguro, barato e preciso. O RFID possui uma ampla gama de aplicações sem fio, como distribuição, rastreamento, monitoramento de pacientes, aplicativos militares, etc.
 
#1.4. Plataforma Arduino
 
O Arduino, em concepção, engloba hardware e software e tem como objetivo fornecer uma plataforma de fácil manipulação para prototipação de projetos interativos, utilizando um microcontrolador, um circuito elétrico básico e sensores periféricos. A placa é composta por um controlador, algumas linhas digital e analógica, além de uma interface serial ou USB.
O ambiente de desenvolvimento do Arduino oferece uma interface de usuário simplificada. A linguagem padrão, denominada Wiring, é derivada de C/C++, por expansão de seus recursos. Por meio desta IDE, são programadas as requisições para a nuvem, o processamento de credencial e a comunicação com a trava analógica.
 
#1.5. Google Firebase e Banco de dados
 
O local do banco de dados normalmente pode estar no armazenamento em nuvem ou em uma unidade básica de armazenamento físico. Este projeto requer o uso de um banco de dados e tenta criá-lo usando um site de armazenamento em nuvem. Existem vários bancos de dados identificados. Em primeiro lugar, é o Google Firebase. É uma API (Application Programming Interface) criada pelo Google principalmente para sincronizar com o aplicativo web. O Firebase também pode ser usado como armazenamento de banco de dados, pois fornece um recurso de banco de dados em tempo real que permite que os dados sejam coletados e armazenados no banco de dados de maneira rápida e eficiente. Além de ser o armazenamento de banco de dados, o Firebase também pode ser usado para desenvolver aplicativos móveis.
Os outros recursos do Firebase incluem notificação, hospedagem e autenticação. O Firebase possui uma API fornecida pela Google para a manutenção do banco de dados, onde os dados transmitidos podem ser obtidos com apenas algumas linhas de código de programação.
No Firebase, os dados serão armazenados como JSON (JavaScript Object Notation) e esses dados armazenados podem ser acessados por uma ampla variedade de plataformas de aplicativos. Na implementação de um banco de dados Firebase em um aplicativo Android, por exemplo, o arquivo JSON do banco de dados pode ser baixado e incluído em um projeto. 
Importante observar que o Firebase usa os protocolos HTTP (Hypertext Transfer Protocol) e XMPP (Extensible Messaging and Presence Protocol), que servem tanto dados de texto simples quanto dados do tipo JSON. Para implementar o Firebase em um projeto usando o software Arduino IDE (Integrated Development Environment), uma biblioteca do Firebase é baixada e linhas de programação específicas podem ser usadas para publicar e assimilar dados a um microcontrolador.
 
#2.    Metodologia da Pesquisa
Revisão bibliográfica.
Experimentação com Arduino. 
#3.    Análise e Interpretação dos Resultados
  	
#3.1. Sistema
O intuito do projeto é desenvolver e prototipar um sistema para gerenciamento de bicicletário, provendo a unificação do controle de traves e destraves por meio de uma identificação acadêmica com RFID. Com um sistema de acesso rápido de destravamento facilitando ao uso prático e rápido para desbloqueio. Para o usuário fornece uma agilidade para o travamento, onde ele somente irá passar a carteirinha, e o gancho irá liberar para o travamento da bicicleta no gancho, não dependendo do uso de um cadeado manual.
Para a instituição o projeto visa a facilitar ao controle de quantidade de bicicleta e, como somente aluno tem acesso, por conseguinte há um ganho de segurança.
Em base, a ideia é que o aluno possa chegar na instituição e escolher a vaga desejada, colocar a bicicleta e travar usando a sua carteirinha estudantil, conforme demonstrado no fluxo de uso.

-------

#Conclusão
Os resultados apresentados nesta experimentação, de fato contribuem para demonstrar a construção de algoritmos e programação com uma aplicação direta com o meio físico. Em consonância com os fluxogramas e equipamentos demonstrados de maneira sólida e confiável, foi possível atestar a utilidade da tecnologia atual com sistemas inteligentes, que oferecem além de escalabilidade, um adicional de seguridade ao ambiente acadêmico.

#Abstract
This paper presents a differentiated development with proposal in the elaboration of a structured logic using computational tools to solve a physical security problem. By taking advantage of low cost technologies it is possible to build a functional bike rack with automated locks, where the "locks" and "unlocks" only depend on an academic authentication card for each student.

#Referências Bibliográfica
Gartner, Inc. Gartner Says 8.4 Billion Connected "Things" Will Be in Use in 2017, Up 31 Percent From 2016. Disponível em: https://www.gartner.com/en/newsroom/press-releases/2017-02-07-gartner-says-8-billion-connected-things-will-be-in-use-in-2017-up-31-percent-from-2016 Acesso em: 01 nov. 2019.
Cloud Firestore. Cloud Firestore. Disponível em: https://firebase.google.com/docs/firestore?hl=pt-br  Acesso em: 01 nov. 2019.
Somayya Madakam, R. Ramaswamy, Siddharth Tripathi. Internet of Things (IoT): A Literature Review. Disponível em: https://file.scirp.org/pdf/JCC_2015052516013923.pdf Acesso em: 04 nov. 2019.

